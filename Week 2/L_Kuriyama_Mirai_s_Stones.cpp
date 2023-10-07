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

    ll x; 
    cin >> x;
    vector<ll>v(x + 5,0);
    vector<ll>y(x + 5,0);
    for(int i = 1; i <= x; i++) {
        cin >> v[i];
        y[i] = v[i];
        v[i] += v[i - 1];
    }
    sort(y.begin(),y.begin()+x+1);
    for(int i = 1; i <= x; i++) y[i] += y[i-1];
    int q;
    cin >> q;
    while(q--) {
        ll ty, l, r; 
        cin >> ty >> l >> r;
        if(ty == 1) cout << v[r] - v[l - 1] << '\n';
        else cout << y[r] - y[l - 1] << '\n';
 
    }
    
    return 0;
}