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
    int n;
    cin >> n;
    vector<int> total(n + 1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total[x]++;
    }
    int ans = -1;
    for (int i = 2; i <= n * 2; i++) {
        int akhon = 0;
        for (int j = 1; j < (i + 1) / 2; j++) {
            if (!(i - j > n)) akhon += min(total[j], total[i - j]);
        }
        if (i % 2 == 0) akhon += total[i / 2] / 2;

        ans = max(ans, akhon);
    }
    cout << ans << '\n';
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