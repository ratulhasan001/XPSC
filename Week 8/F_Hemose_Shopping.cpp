#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n,x;
        cin >> n >> x;
        vector<int> v(n),cpy(n);
        for(auto &i : v) cin >> i;
        cpy = v;
        sort(v.begin(),v.end());
        bool ok = true;
        for(int i = 0; i < n; i++) {
            if(i - x < 0 and i+x >= n) ok &= (v[i] == cpy[i]);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}