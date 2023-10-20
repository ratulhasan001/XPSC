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
    
        int n,x = 0; 
        cin >> n;

        for(int i = 0; i < n; i++) {
            int y; 
            cin >> y;
            x ^= y;
        }
        if(x == 0) cout << "0" << '\n';
        else {
            if(n&1) cout << x << '\n';
            else cout << "-1" << '\n';
        }
    }
    return 0;
}