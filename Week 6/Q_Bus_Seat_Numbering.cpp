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
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        if(n >= 1 and n <= 10) cout << "Lower Double";
        else if(n >= 11 and n <= 15) cout << "Lower Single";
        else if(n >= 16 and n <= 25) cout << "Upper Double";
        else if(n >= 26 and n <= 30) cout << "Upper Single";
        cout << '\n';
    }
    return 0;
}