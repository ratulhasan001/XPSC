#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
        long long df,cf,uf,d,c,df_shortage=0,cf_shortage=0,ts=0;
        cin>>df>>cf>>uf>>d>>c;
        if(df<d) df_shortage=d-df;
        if(cf<c) cf_shortage=c-cf;
        ts=cf_shortage+df_shortage;
        if(ts<=uf) cout<<"YES"<< '\n';
        else cout<<"NO"<< '\n';
    }

    return 0;
}