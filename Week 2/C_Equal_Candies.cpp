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
    
        int n; cin>> n;
        vector<int>a;
        ll sum=0;
        for(int i=0; i<n; i++) {
            int x; cin >>x; 
            a.push_back(x);
        }
        // cout<<sum<<" "<<sum%5<<nl;
        int mn= minimum(a);
        // cout<<mn;
        for(int i=0; i<a.size(); i++) {
            a[i]=a[i]-mn;
            sum+=a[i];
        }

        cout<<sum<<nl;
    
    }
    return 0;
}