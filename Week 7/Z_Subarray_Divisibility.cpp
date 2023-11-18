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
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0, cnt = 0;
    map < ll, ll > mp;
    mp[0] = 1;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        sum %= n;
        while(sum < 0) sum += n;
        if (mp.find(sum) != mp.end()) cnt += mp[sum];
        mp[sum]++;
    }
    cout << cnt << '\n';
    return 0;
}