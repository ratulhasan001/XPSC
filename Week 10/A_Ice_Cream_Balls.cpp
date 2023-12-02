#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    ll n;
    cin >> n;
    ll l = 0, r = INT_MAX , m, ans = 2;
    while(l <= r) {
        m = l + (r - l) / 2;
        ll val = (m * (m - 1)) / 2;
        if(val <= n) {
            ans = m + (n - val);
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    cout << ans << "\n";
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