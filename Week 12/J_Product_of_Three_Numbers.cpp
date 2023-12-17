#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

bool isPrime(int n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

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
    int n;
    cin >> n;
    if(isPrime(n)) {
        cout << "NO" << '\n';
        return;
    }
    int div = 2, cnt = 0;
    bool ok = false;
    unordered_map < int, bool, custom_hash > hash;
    vector < int > divs;
    while(div * div < n) {
        if(n % div == 0) {

            if(!hash[div]) {
                divs.push_back(div);
                hash[div] = true;
            }
            n /= div;
            for (int i = div + 1; i * i <= n; i++) {
                if (n % i == 0) {
                    if(i == n / i) continue;
                    if(hash[i]) continue;
                    if(hash[n / i]) continue;
                    divs.push_back(i);
                    divs.push_back(n / i);
                    ok = true;
                    break;
                }
            }
        }
        else div++;
        if(divs.size() == 3) break;
    }   
    
    if(!ok) cout << "NO" << '\n';
    else {
        if(divs.size() < 3) {
            cout << "NO" << '\n';
            return;
        }
        cout << "YES" << '\n';
        for(auto x : divs) cout << x << " ";
        cout << '\n';
    }
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