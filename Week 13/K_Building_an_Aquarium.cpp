#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool MIDexists(ll a[], ll n, ll mid, ll x) {
    ll tot = 0 ;
    for(int i=0 ; i<n; i++) {
        if(a[i]< mid) tot+=(mid-a[i]);
    }
    return  tot<=x;
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        int n,x;
        cin >> n >> x;
        ll a[n];
        for(int i=0 ; i<n; i++) cin >> a[i];
        ll right =0, left = INT_MAX, max_height = INT_MAX;
        while(right<=left) {
            ll mid = (left-right)/2+right ;
            if(MIDexists(a,n,mid,x)) {
                max_height = mid;
                right = mid+1;
            }
            else left = mid - 1;
        }
        cout<<max_height<<'\n';

    }
    return 0;
}