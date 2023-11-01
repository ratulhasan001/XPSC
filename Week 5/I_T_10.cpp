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
    
        int n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        ll l = 0, r = INT_MAX, m, ans, k, f;
        while(l <= r) {
            m = (r - l) / 2 + l;
            k = 0;
            ans = 0;
            for(int i = 0; i < n; i++) {
                if(abs(v[k] - v[i]) > 2 * m) {
                    k = i;
                    ans++;
                }
            }
            if(ans >= 3) l = m + 1;
            else {
                f = m;
                r = m - 1;
            }
        }
        cout << f << '\n';
    }
    return 0;
}