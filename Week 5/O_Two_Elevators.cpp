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
    
        int a, b, c, dif1, dif2; 
        cin >> a >> b >> c;
        dif1 = abs(a - 1);
        dif2 = abs(b - c)+ abs(c - 1);
        if(dif1 < dif2) cout << "1" << '\n';
        else if(dif1 > dif2) cout << "2" << '\n';
        else cout << "3" << '\n';

    }
    return 0;
}