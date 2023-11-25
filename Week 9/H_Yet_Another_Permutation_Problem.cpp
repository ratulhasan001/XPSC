#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; 
    cin >> t;
    for(int testCase = 1; testCase <= t; testCase++) {
        int n; 
        cin >> n;
        vector < int > v;
        for (int i = 1; i <= n; i += 2) {
            for (int j = i; j <= n; j *= 2) v.push_back(j);
        }
        for(auto x : v) cout << x << " ";
        cout << '\n';
    }
    return 0;
}