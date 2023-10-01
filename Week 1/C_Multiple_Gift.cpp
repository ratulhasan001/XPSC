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

    ll n, k, cnt = 0;
    cin >> n >> k;
    for(ll i = n; i <= k; i *= 2) {
        cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}