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
    ll i = 0, j = 0, sum = 0, cnt = 0;
    while(i < n) {
        sum += a[i];
        while(sum > k and j <= i) {
            sum -= a[j];
            j++;
        }
        if(sum == k) cnt++;
        debug(sum);
        i++;
    }
    cout << cnt << '\n';
    return 0;
}