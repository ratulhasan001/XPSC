#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int digit(int n) {
    int cnt = 0;
    while(n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        int c = digit(n);
        ll x = pow(10, c - 1 );
        cout << abs(x - n) << '\n';
        
    }
    return 0;
}