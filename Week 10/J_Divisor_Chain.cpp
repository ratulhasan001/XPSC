#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
        ll n;
        cin >> n;
        vector < ll > result;
        ll flag1 = 1;
 
        while (flag1 < n) {
            result.push_back(flag1);
            flag1 *= 2;
        }
        debug(result);
        ll last = result[result.size() - 1];
        ll rem = n - last;
        ll flag2 = 0;
        if (rem % 2) {
            flag2 = 1;
            rem--;
        }
 
        for (ll i = 31; i >= 0; i--) {
            ll ith_bit = rem & (1 << i);
            if (ith_bit) {
                last += pow(2, i);
                result.push_back(last);
            }
        }
 
        if (flag2) {
            result.push_back(n);
        }
        ll n2 = result.size();
        cout << n2 << '\n';
        for (ll i = n2 - 1; i >= 0; i--) {
            cout << result[i] << " ";
        }
        cout << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}