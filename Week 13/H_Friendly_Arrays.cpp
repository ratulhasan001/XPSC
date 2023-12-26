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
    int n, m;
    cin >> n >> m;
    ll a[n + 5], b[m + 5];
    ll x = 0, y = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x ^= a[i];
    }
    ll temp = 0;
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        temp |= b[i];
    }
    for (int i = 1; i <= n; i++) y ^= (a[i] | temp);
    cout << min(x, y) << " " << max(x, y) << '\n';
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