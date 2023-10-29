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
        cout << n << " " << n - 1  << " ";
        for(int i = 1; i < n - 1; i++) cout << i << " ";
        cout << '\n';
    }
    return 0;
}