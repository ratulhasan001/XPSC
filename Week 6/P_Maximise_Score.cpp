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
        vector<int>v(n);
        for(int &i : v) cin >> i;
        vector<int>a;
        int ans = INT_MIN, ans1, ans2;
        a.push_back (abs(v[1] - v[0]));
	    a.push_back(abs(v[n - 1] - v[n - 2]));
        for(int i = 1; i <= n - 2; i++) {
            ans1 = abs(v[i + 1] - v[i]);
            ans2 = abs(v[i] - v[i - 1]);
            ans = max(ans1, ans2);
            a.push_back(ans);
        }
        sort(a.begin(), a.end());
        cout << a[0] << '\n';
    }
    return 0;
}