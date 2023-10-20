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
    
        int n,e = 0,o = 0; 
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] & 1) o++;
            else e++;
        }
        if(e == n or o == n) cout << "YES" << '\n';
        else {
            ranges :: sort(a);
            if(a[0] & 1) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}