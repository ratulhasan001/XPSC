#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

bool ok(double a, double b) {
    return fabs(a - b) < 1e-13;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        vector<int>v(n);
        for(int &i : v) cin >> i;
        
        int l = 1, r = *max_element(v.begin(), v.end()), m, flag = 0;

        while(l <= r) {
            m = (l + r) / 2;
            double ans = 1.0;
            for(auto x : v) ans *= x * 1.0 / m * 1.0;
            if(ok(ans , 1.0)) {
                flag = 1;
                break;
            }
            else if(ans > 1) l = m + 1;
            else r = m - 1;
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}

