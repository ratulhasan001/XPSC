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
        
        int x, y;
        cin >> x >> y;
        if(y % x != 0) cout << "0 0" << '\n';
        else cout << "1 " << y / x << '\n';  
        
    }
    return 0;
}