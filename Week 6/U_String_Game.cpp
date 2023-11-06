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
        string s;
        cin >> n >> s;
        bool z = true, r = false;
        if(n == 1) {
            cout << "Ramos" << '\n';
            continue;
        }
        else if(n == 2) {
            cout << (s[0] != s[1] ? "Zlatan" : "Ramos" ) << '\n';
            continue;
        }
        else if(n > 2) {
            cout << (s[0] == s[1] ? "Ramos" : "Zlatan" ) << '\n';
            continue;
        }
        for(int i = 0; i < n - 1; i++) {
            if(s[i] != s[i + 1]) {
                if(z) {
                    i += 2;
                    z = false;
                    r = true;
                }
                else if(r) {
                    i += 2;
                    r = false;
                    z = true;
                }
            }
            else {
                cout << (r ? "Ramos" : "Zlatan") << '\n';
                break;
            }
        }
    }
    return 0;
}