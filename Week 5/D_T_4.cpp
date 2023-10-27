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
        vector<int>v(n);
        ll sum = 0;
        for(int &i : v) {
            cin >> i ;
            sum += i;
        }
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}
