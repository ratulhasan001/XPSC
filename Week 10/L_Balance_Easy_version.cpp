#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};

vector < ll > v;
char c;
ll n;
const ll N = 2e18;
unordered_map < ll, ll, custom_hash > mp;
unordered_map < ll, ll, custom_hash > save;
void attack() {

    cin >> c >> n;
    if(c == '+') {
        v.push_back(n);
        mp[n]++;
    }
    else {
        if(mp[n] == 0) {
            cout << n << '\n';
            return;
        }
        else {
            ll x = n + n;
            if(save[n]) x = save[n];
            while(true) {
                if(!mp[x]) {
                    cout << x << '\n';
                    return;
                }
                x += n;
                save[n] = x;
            }
        }
        
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}