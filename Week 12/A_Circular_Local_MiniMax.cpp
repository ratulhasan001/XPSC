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
    int n;
    cin >> n;
    vector < int > v(n);
    for (auto &i : v) cin >> i;
    if (n & 1) {
        cout << "NO\n";
        return;
    }
    sort(v.begin(), v.end());
    vector < int > ans(n);
    int j = 0;
    for (int i = 0; i < n; i += 2) ans[i] = v[j++];
    for (int i = 1; i < n; i += 2) ans[i] = v[j++];
    ans.push_back(ans[0]);
    for (int i = 1; i < n; i++) {
        if (ans[i - 1] < ans[i] and ans[i] > ans[i + 1]) continue;
        if (ans[i - 1] > ans[i] and ans[i] < ans[i + 1]) continue;
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
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