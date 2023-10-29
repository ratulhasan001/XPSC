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
    
        int n, a, b, c;
        cin >> n;
        a = b = c = n / 3;
        if(n % 3 == 0) {
            b++;
            c--;
        }
        else if(n % 3 == 1) {
            b += 2;
            c--;
        }
        else if(n % 3 == 2) {
            a++;
            b += 2;
            c--;
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}