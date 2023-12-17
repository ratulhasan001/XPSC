#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
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
        static
        const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void attack() {
    int n, x;
    cin >> n >> x;
    if(n % x) {
        cout << -1 << '\n';
        return;
    }
    unordered_map < int, bool, custom_hash > hash;
    vector < int > v(n + 1, -1);
    v[1] = x;
    v[n] = 1;
    
    hash[1] = hash[x] = true;
    for(int i = 1; i <= n - 1; i++) {
        if(!hash[i]) {
            v[i] = i;
            hash[i] = true;
        }
    }
    int baki;
    for(int i = 1; i <= n; i++) if(!hash[i]) baki = i;
    for(int i = 1; i <= n; i++) if(v[i] == -1) v[i] = baki;
    for(int i = 2; i <= n - 1; i++) {
        if(v[i] % x == 0 and n % i == 0) {
            swap(v[i], v[x]);
            x = i;
        }
    }
    for(int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}

