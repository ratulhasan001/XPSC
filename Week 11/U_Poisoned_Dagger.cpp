#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    ll n, h;
    cin >> n >> h;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll l = 0, r = 1e18, m, sum, ans;
    while(l <= r) {
        m = l + (r - l) / 2;
        sum = m;
        for(int i = 0; i < n - 1; i++) sum += min(m, a[i + 1] - a[i]);
        
        sum >= h ? ans = m, r = m - 1 : l = m + 1;

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