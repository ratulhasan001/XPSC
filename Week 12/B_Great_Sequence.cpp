#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    ll n, x;
    cin >> n >> x;
    multiset < ll > m;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        m.insert(x);
    }
    ll ans = 0;
    while (m.size() != 0) {
        auto it = m.find( *m.begin() * x);
        if (it == m.end()) {
            ans++;
        } else {
            m.erase(it);
        }
        m.erase(m.begin());
    }
    cout << ans << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}