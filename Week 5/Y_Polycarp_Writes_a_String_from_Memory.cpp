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
    
        string x;
        cin >> x;
        set<char>s;
        int n = x.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            s.insert(x[i]);
            if(s.size() > 3) {
                s.clear();
                ans++;
                s.insert(x[i]);
            }
        }
        if(s.size() > 0) ans++;
        cout << ans << '\n';
    }
    return 0;
}