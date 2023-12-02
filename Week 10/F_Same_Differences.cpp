#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void attack() {
            int n; cin >>n;
        int a[n];
        map<int,int>mp;
        ll cnt=0;
        for(int i=0; i<n;i++)  {
            cin >> a[i];
            int x=a[i]-i;
            cnt+=mp[x];
            mp[x]++;
        }
        cout<<cnt<<'\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}