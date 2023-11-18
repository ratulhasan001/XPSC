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
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0, cnt = 0;
    map < ll, ll > mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        debug(sum);
        if (mp.find(sum - k) != mp.end()) cnt += mp[sum - k], debug(sum, k, sum - k, cnt);
        mp[sum]++;
    }
    debug(mp);
    cout << cnt << '\n';
    return 0;
}