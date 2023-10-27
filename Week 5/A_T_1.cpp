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

    int n, q, t = 0;
    while(cin >> n >> q) {
        if(n == 0 and q == 0) break;
        t++;
        vector<int>v(n);
        unordered_map<int,int>mp;
        for(int &i : v) {
            cin >> i;
            mp[i]++;
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << t << ":" << '\n';
        while(q--) {
            int x;
            cin >> x;
            int it = lower_bound(v.begin(), v.end(), x) - v.begin();
            it++;
            if(mp[x] == 0) cout <<  x << " not found" << '\n';
            else cout << x << " found at " << it << '\n';
        }
    }
    return 0;
}