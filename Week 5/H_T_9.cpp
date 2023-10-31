#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif


ll total(vector<ll>v, vector<ll>pre, ll x, ll n) {
    ll idx = upper_bound(v.begin(), v.end(), x) - v.begin();
    ll rem_tree = n - idx;
    ll f = rem_tree * x;
    return pre[n] - pre[idx] - f;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    vector<ll>pre(n + 1);
    for(auto &x : v) cin >> x;
        
    sort(v.begin(), v.end());
    pre[0] = 0;
    for(ll i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    debug(v);
    debug(pre);
    ll l = 0, r = v[n - 1], m, ans = 0;
    while(l <= r) {
        m = (r - l) / 2 + l;
        ll harvest = total(v, pre, m, n);
        if(harvest < k) {
            r = m - 1;
        } 
        else if(harvest > k) {
            ans = m;
            l = m + 1;
        }
        else {
            ans = m;
            break;
        }
    }
    cout << ans << '\n';
    
    return 0;
}