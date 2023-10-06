#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll a[n], pre[n + 1];
    pre[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pre[i + 1] = a[i];
    }
    for(int i = 1; i <= n; i++) pre[i] += pre[i - 1];
    debug_array(pre,n+1);
    int q;
    cin >> q;
    while(q--) {
        int i, j;
        cin >> i >> j;
        cout << pre[j + 1] - pre[i] << '\n';
        
    }
    
    return 0;
}