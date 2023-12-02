#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    ll n;
    cin >> n;
    vector < ll > v(n);
    for(auto &i : v) cin >> i;
    ll mx = *max_element(v.begin(), v.end());
    ll Gcd = 0;
    for(auto x : v) Gcd = __gcd(mx - x, Gcd);
    ll y = 0;
    for(auto x : v) y += (mx - x) / Gcd;
    cout << y << " " << Gcd << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}