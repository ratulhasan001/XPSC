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
    
        ll n, count = 0;
        cin >> n;
        ll a[n], ans = n, ans1 = 0, seg = 0, sum = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        ll x = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            ans1 = i + 1;
            x = 0, count = 0,seg = 0;
            for (int j = i + 1; j < n; j++) {
                seg += a[j], count++;
                if (seg == sum) {
                    ans1 = max(ans1, count), seg = 0, count = 0;
                    if (j == n - 1)  x = 2;
                }
                else if (seg > sum) break;
            }
            if (x == 2) ans = min(ans, ans1);
        }
        cout << ans << '\n';
    }
    return 0;
}