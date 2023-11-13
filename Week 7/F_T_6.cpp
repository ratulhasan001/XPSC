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

    ll n, k;
    cin >> n >> k;
    vector < ll > div;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            div.push_back(i);
            if (i != n / i) div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    // debug(div);
    cout << (k > div.size() ? -1 : div[k - 1]) << '\n';
    return 0;
}