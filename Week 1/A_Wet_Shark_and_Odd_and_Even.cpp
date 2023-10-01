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

    ll n, od = 0, ev = 0;
    cin >> n;
    vector<ll>v(n);
    vector<ll>odd;
    vector<ll>even;
    for(ll &i : v) {
        cin >> i;
        if(i % 2 == 0) {
            even.push_back(i);
            ev++;
        }
        else {
            odd.push_back(i);
            od++;
        }
    }
    if(ev == 0 and od == 1) {
        cout << "0" << '\n';
        return 0;
    }
    ll sum = 0;
    for(auto x : even) sum += x;
    ranges :: sort(odd);
    ranges :: reverse(odd);
    
    if(od % 2 == 0) {
        for(auto x : odd) sum += x;
        cout << sum << '\n';
    }
    else {
        for(int i = 0; i < od - 1; i++) sum += odd[i];
        cout << sum << '\n';
    }

    return 0;
}