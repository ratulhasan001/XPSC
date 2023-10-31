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
    
        int n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x : v) cin >> x;
        ranges :: sort(v);
        ll l = 0, r = INT_MAX, m, ans;
        while(l <= r) {
            
        }
    }
    return 0;
}