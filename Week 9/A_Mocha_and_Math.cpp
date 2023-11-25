#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        vector < int > v(n);
        for(auto &i : v) cin >> i;
        int ans = v[0];
        for(int i = 1; i < n; i++) ans &= v[i];
        cout << ans << '\n';
    }
    return 0;
}