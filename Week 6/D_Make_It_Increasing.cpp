#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int n; cin >> n;
        vector<int>v(n);
        for(int &i: v) cin >> i;

        int ans = 0,flag=0;
        for(int i=n-2; i>=0; i--) {
            if(v[i+1] == 0) {
                flag=1;
                break;
            }
            while(v[i]>=v[i+1] ) {
                v[i]/=2;
                ans++;
            }
        }
        if(flag) cout<<"-1\n";
        else cout<<ans<<'\n';
    }
    return 0;
}