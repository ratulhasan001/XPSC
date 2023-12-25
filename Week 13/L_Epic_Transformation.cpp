#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl= '\n';

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int n;
        cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mx=0;
        for(auto x:mp) mx=max(mx,x.second);
        int ans=n&1;
        if(n&1) {
            mx--;
            n--;
        }
        mx=n-mx; //2
        // cout<<mx<<nl;
        mx*=2;  //4
        // cout<<mx<<nl;
        // cout<<n-mx<<nl; // 5--> 4 =0
        ans+=max(0,n-mx);
        cout<<ans<<nl;
    
    }
    return 0;
}