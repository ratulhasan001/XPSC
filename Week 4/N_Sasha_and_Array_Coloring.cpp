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
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        vector<int>v(n);
        for(int &i : v) cin >> i;
        ranges :: sort(v);
        ll sum = 0;
        for(int i = 0; i < n/2; i++) {
            sum += abs(v[i] - v[n - i - 1]);
        }
        cout << sum << "\n";
    }
    return 0;
}