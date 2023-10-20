#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif
const int mod= 1e9+7;
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n,k; cin >> n >> k;
        int ans = 1;
        for(int i = 1; i <= k; i++) {
            ans = (1LL * ans * n) % mod;
        }
        cout << ans << '\n';
    
    }
    return 0;
}