#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>ans;
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        ans.push_back(abs(a[0] - b[0]));
        for(int i = 1; i < n; i++) {
            int rem;
            if(a[i] < b[i - 1]) rem = b[i - 1];
            else rem = a[i];
            ans.push_back(abs(rem - b[i]));
        }
        for(auto x : ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}