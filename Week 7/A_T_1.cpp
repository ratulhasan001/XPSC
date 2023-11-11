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

    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    
    ll red = n / a;
    ll blue = n / b;
    ll both = n / lcm(a, b);
    // cout<<red<<nl<<blue<<nl<<both<<nl;
    ll ans = red * x + abs(both - blue) * y;
    ans = max(ans, blue * y + abs(both - red) * x);
    cout << ans << '\n';
    return 0;
}