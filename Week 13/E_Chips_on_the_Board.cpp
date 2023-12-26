#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int n;
        cin >> n;
        ll a[n], b[n];
        for(int i=0 ; i < n; i++) cin >> a[i];
        for(int i=0 ; i < n; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        ll sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++) {
            sum1+= a[0] + b[i];
            sum2+= b[0] + a[i];
        }
        cout<<min(sum1,sum2)<<'\n';
    }
    return 0;
}