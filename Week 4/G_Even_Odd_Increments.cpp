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
    
        int n, q;
        ll odd = 0, even = 0, sum = 0;
        cin >> n >> q;
        vector<int>v(n);
        for(int &i : v) {
            cin >> i;
            sum += i;
            if(i & 1) odd++;
            else even++;
        }
        // even + odd = odd;
        // odd + odd = even;
        while(q--) {
            int x, y; 
            cin >> x >> y;
            if(x == 0) {
                // even case
                if(y & 1) {
                    int temp = even;
                    odd = n;
                    even = 0; // even + odd case 
                    sum += (temp * y);
                    cout << sum << '\n';
                }
                else {
                    sum += (even * y) ;
                    cout << sum << '\n';   
                }
            }
            else {
                // odd case
                if(y & 1) {
                    int temp = odd;
                    even = n;
                    odd = 0;
                    sum += (temp * y);
                    cout << sum << '\n';
                }
                else {
                    sum += (odd * y);
                    cout << sum << '\n';
                }

            }
        }
    }
    return 0;
}

