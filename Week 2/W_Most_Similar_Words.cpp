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
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n, k;
        cin >> n >> k;
        vector<string>v(n);
        for(int i = 0 ; i < n; i++) {
            cin >> v[i];
        }
        int ans = INT_MAX, cnt = 0;
        for(int i = 0 ; i < n; i++) {;
            for(int j = i + 1; j < n; j++) {
                string x = v[i], y = v[j];
                for(int a = 0; a < k; a++) {
                    cnt += abs(x[a] - y[a]);
                }
                ans = min(ans, cnt);
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}