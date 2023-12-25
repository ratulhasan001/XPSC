#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int n; 
        cin >> n;
        vector<ll>v(n);
        int a[n];
        for(ll &i : v ) cin >> i;
        // ranges :: sort(v);
        ll x = 1;
        for(int i = 0; i < n ; i++)   {
            if (v[i] == x) x = v[i] + 1;
            if (i == n-1) break;
            x++;
        }
        cout << x << '\n';
    }
    return 0;
}