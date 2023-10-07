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

    int n, sum = 0; 
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                sum += gcd(i, gcd(j, k));
            }
        }
    }
    cout << sum << '\n';
    return 0;
}