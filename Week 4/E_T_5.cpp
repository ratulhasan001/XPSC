#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif


bool ok(ll x) {
    string a, b;
    a = b = to_string(x);
    reverse(a.begin(), a.end());
    return a == b;
}
vector<ll>p;
void pre_calc() {
    for (int i = 0; i < (1 << 15); i++) {
        if (ok(i)) p.push_back(i);
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pre_calc();

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        ll n;
        cin >> n;
        vector<ll>v(n);
        unordered_map<ll,ll>mp;
        for(ll &i : v) {
            cin >> i;
        }
        ll ans = 0;
        for(auto x : v) {
            for(auto y : p) {
                ll f = (y ^ x);
                if(mp.find(f) != mp.end()) ans += mp[f];
            }
            mp[x]++;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}