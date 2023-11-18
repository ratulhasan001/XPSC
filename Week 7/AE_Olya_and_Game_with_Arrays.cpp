#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const char nl= '\n';
#define all(x) x.begin(),x.end()
#define minimum(x) *min_element(x.begin(),x.end())
#define maximum(x) *max_element(x.begin(),x.end())

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int x; cin >> x;

        vector<ll>v[x];
        for(int i=0; i<x; i++) {
            int n; cin >> n;
            for(int j=0; j<n; j++) {
                ll z; cin >> z;
                v[i].push_back(z);
            }
        }
        if(x==1) {
            cout<<minimum(v[0])<<nl;
            continue;
        }
        for(int i=0; i< x; i++) {
            sort(all(v[i]));
        }
        // for(int i=0; i<x; i++) {
        //     for(int j=0; j<v[i].size(); j++) {
        //         // cout<<v[i][j]<<" ";
        //         // cout<<v[i][1]<<" ";
        //     }
        //     cout<<nl;
        // }
        ll sum=0;
        // for(int i=0; i< x; i++) {
        //     sum+= v[i][0];
        // }
        vector<ll>s;
        ll sc_min=LONG_MAX;
        for(int i=0; i< x; i++) {
            sc_min=min(sc_min,{v[i][0]}); // overall min
        }
        for(int i=0; i<x; i++) {
            s.push_back(v[i][1]);
        }
        // for(auto x:s) cout<<x<<" ";
        // cout<<nl;
        sort(all(s));
        for(int i=1; i<s.size(); i++) {
            sum+=s[i];
        }
        sum+=sc_min;
        cout<<sum<<nl;


    
    }
    return 0;
}