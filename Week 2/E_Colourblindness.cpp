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
        string x, y;
        cin >> x >> y;
        bool flag = true;
        for(int i = 0; i < n; i++) {
            if((x[i] == 'G' and y[i] == 'B') or(x[i] == 'B' and y[i] == 'G')) continue;
            else if(x[i] != y[i]) flag = false;
        }
        cout << (flag ? "YES" : "NO") << '\n';

    }
    return 0;
}