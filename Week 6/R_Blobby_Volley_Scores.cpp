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
    
        int n, a = 0, b = 0;
        bool f = true, g = false;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'A') {
                f = true;
                if(!g) {
                    a++;
                }
                else g = false;
            }
            if(s[i] == 'B') {
                g = true;
                if(!f) {
                    b++;
                }
                else f = false;
            }
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}