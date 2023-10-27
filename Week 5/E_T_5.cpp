#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

ll sum (ll n) {
    ll s = 0;
    while( n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    cin >> n >> s;

    ll l = 0, r = n, ans = 0;
    while(l <= r) {
        ll m = (r - l) / 2 + l;
        if(sum(m) + s <= m) {
            r = m - 1;
            ans = m;
        }
        else {
            l = m + 1;
        }
    }
    if (r == n) cout << 0 << '\n';
    else cout << n - ans + 1 << '\n';

    return 0;
}
