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
    
        string s, t;
        cin >> s >> t;
        if(t == "a") {
            cout << 1 << '\n';
            continue;
        }
        int cnt = 0;
        for(int i = 0; i < (int)t.size(); i++) cnt += (t[i] == 'a');
        if(cnt >= 1) cout << -1 << '\n';
        else {
            ll f = pow(2, (int)s.size());
            cout << f << '\n';
        }

    }
    return 0;
}