#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        ll n, k;
        cin >> n >> k;
        ll x;
        if(n % 2 == 0) x = n / 2;
        else x = n / 2 + 1;
        if(n < k * 2) {
            cout << "NO" << '\n';
        }
        else {
            ll ans = x - k;
            cout << (ans % 2 == 0 ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}