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
        int ok = 0;
        vector<int>v;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if((k & x) == k) v.push_back(x);
        }
        if(!v.empty()) {
            int ans = v[0];
            for(int i = 1; i < v.size(); i++) ans &= v[i];
            if(ans == k) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        else cout << "NO" << '\n';
    }
    return 0;
}