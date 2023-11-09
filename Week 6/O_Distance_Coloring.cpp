#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

const int MOD = 1e9 + 7;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n, k;
        ll ans = 1;
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            if(k > 0) {
                ans = (k * ans) % MOD;
                k--;
            }
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}