#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    ll n, sum;
    cin >> n >> sum;
    if (n > sum or (n % 2 == 0 and sum % 2 == 1)) {
        cout << "NO" << '\n';
        return;
    } else {
        cout << "YES" << '\n';
        if (n % 2 == 1) {

            for (int i = 1; i < n; i++) {
                cout << "1 ";
                sum--;
            }
            cout << sum << '\n';
        } else {
            for (int i = 1; i < n - 1; i++) {
                cout << "1 ";
                sum--;
            }
            cout << sum / 2 << " " << sum / 2 << '\n';
        }
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}