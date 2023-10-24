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

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll>car(n);
        vector<ll>out(m);
        for(ll &i : car) cin >> i;
        for(ll &i : out) cin >> i;
        sort(car.rbegin(), car.rend());
        sort(out.rbegin(), out.rend());
        ll mx = 0;
        for(ll i = 0; i < n and i < m; i++) {
            mx += min(car[i], out[i] * h);
        }
        cout << mx << '\n';

    }
    return 0;
}