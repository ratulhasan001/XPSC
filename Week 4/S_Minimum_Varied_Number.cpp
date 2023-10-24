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
        ll n;
        cin >> n;
        vector<int>v = {1,2,3,4,5,6,7,8,9,19,29,39,49,59,69,79,89,189,289,389,489,589,689,789,1789,2789,3789,4789,5789,6789,16789,26789,36789,46789,56789,156789,256789,356789,456789,1456789,2456789,3456789,13456789,23456789,123456789};
        cout << v[n - 1] << '\n';
    }
    return 0;
}