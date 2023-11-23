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
        vector < int > a(n), b(n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        debug(a, b);
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i] and a[i] + 1 != b[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}