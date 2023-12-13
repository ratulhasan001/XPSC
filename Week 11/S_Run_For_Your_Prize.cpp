#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

const int N = 1e6;

void attack() {
    int n;
    cin >> n;
    int a[n + 1], ans = -1;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        int p1 = abs(a[i] - 1);
        int p2 = abs(a[i] - N);
        ans = p1 < p2 ? max(ans, p1) : max(ans, p2);
    }
    cout << ans << '\n';


}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}