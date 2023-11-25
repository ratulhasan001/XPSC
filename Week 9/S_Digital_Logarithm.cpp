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
        vector < int > a(n);
        vector < int > b(n);
        map < int, int > am;
        map < int, int > bm;
        for(auto &i : a) {
            cin >> i;
            am[i]++;
        }
        for(auto &i : a) {
            cin >> i;
            bm[i]++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0 and bm[a[i]] != 0) ans += bm[a[i]];
            else if(am[a[i]] != 0 and b[i] == 0) ans += am[i];
        }
    }
    return 0;
}