#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl= '\n';
int GcdOfArray(vector<int>& arr, int idx)
{
    if (idx == arr.size() - 1) {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(a, b);
}
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
        vector<int>odd;
        vector<int>even;
        int n; cin >> n;
        for(int i=1; i<=n; i++) {
            if(i&1) odd.push_back(i);
            else even.push_back(i);
        }

        int o_size=odd.size()-1;
        int e_size= even.size()-1;
        int odd_x= GcdOfArray(odd,o_size);
        int even_x= GcdOfArray(even,e_size);
        // cout<<odd_x<<nl<<even_x<<nl;
        if(odd_x<even_x) {
            for(int i=n; i>=1; i--) cout<<i<<" ";
        }
        else cout<<"-1";
        cout<<nl;
        odd.clear();
        even.clear();
    
    }
    

    return 0;
}
