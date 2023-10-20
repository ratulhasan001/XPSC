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
    
        int n, k; 
        cin >> n >> k;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int &i : v1) cin >> i;
        for(int &i : v2) cin >> i;
        vector<pair<int,int>>pv;
        for(int i=0; i<n; i++) pv.emplace_back(v1[i], i);

        debug(pv);
        ranges :: sort(pv);
        ranges :: sort(v2);
        vector<int>x(n);
        debug(pv);
        for(int i = 0; i < n; i++) x[pv[i].second] = v2[i];
        for(auto it : x) cout << it << " ";
        debug(x);
        cout << '\n'; 

    }
    return 0;
}