#include <bits/stdc++.h>
using namespace std;
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
        // increase 2 decrease 3
        int cnt = 0;
        if(n == 50) {
            cout << 0 << '\n';
            continue;
        }
        if(n > 50) {
            while(n > 50) {
                n -= 3;
                cnt++;
            }
            if(n == 50) cout << cnt << '\n';
            else {
                debug(n, cnt);
            }
        }
        else {
            while(n < 50) {
                n += 2;
                cnt++;
            }
            if(n == 50) cout << cnt << '\n';
            else {
                debug(n, cnt);
            }
        }
    }
    return 0;
}