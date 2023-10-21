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
        if(n == 1 or n == 3) {
            cout << "-1" << '\n';
            continue;
        }
        vector<int>v;
        for(int i = n; i > n/2; i--) {
            v.push_back(i);
        }
        for(int i = 1; i <= n/2; i++) v.push_back(i);
        for(int i = 2; i < n - 2; i++) {
            if(v[i] == i + 1) swap(v[i], v[i + 1]);
        }
        for(auto x : v) cout << x << " ";
        cout << '\n';
    }
    return 0;
}