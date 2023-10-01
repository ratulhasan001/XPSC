#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

vector<bool>dp(100000,0);
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    dp[0] = true;

    for(int i = 1; i <=c; i++) {
        if(i - a >= 0 and dp[i - a]) dp[i] = true;
        if(i - b >= 0 and dp[i - b]) dp[i] = true;
    }
    cout << (dp[c] ? "Yes" : "No") << '\n';
    return 0;
}