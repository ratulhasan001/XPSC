#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
using pii = pair<ll,ll>;
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        ll polyS, polyW;
        ll n,cnt=0; cin >> n;
        vector<pii>v;
        for(int i = 0; i < n; i++) {
            int a , b;
            cin >> a >> b;
            if(i == 0) polyS = a, polyW = b;
            else {
                v.push_back({a,b});
            }
        }
        ranges::sort(v);
        int flag = 0;
        for(auto x : v) {
            if(x.first < polyS) continue;
            else {
                if(x.second >= polyW) flag = 1;
            }
        }
        if(flag) cout<<"-1\n";
        else cout<<polyS<<'\n';
        
    
    }
    return 0;
}