#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {

        int n,diff=0,flag=0,flag2=1; cin >> n;
        vector<int>x(n),y(n);
        for(int i=0; i<n; i++) {
            cin >> x[i];
        }
        for(int i=0; i<n; i++) {
            cin >> y[i];
        }
        for(int i=0; i<n; i++) {
            if(x[i]<y[i]) {
                flag=1;
                break;
            }
            diff= max(diff,x[i]-y[i]);
        }
        if(flag==1) cout<<"NO"<<'\n';
        else  {
            for(int i=0; i<n; i++) {
                if(x[i]-diff<y[i] and y[i]!=0) flag2=0;
            }
            if(flag2==1) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
 
    }
    
    return 0;
}