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
        vector < int > v(n);
        for(int &i : v) cin >> i;
        bool ans = true;
        for(int i = 0; i < n; i++) {
            bool ok = false;
            for(int j = i + 1 + 1; j >= 2; j--) {
                if(v[i] % j != 0) {
                    ok = true;
                    break;
                }
            }
            ans &= ok;
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}