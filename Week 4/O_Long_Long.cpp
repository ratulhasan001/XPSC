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
        vector<int>cnt;
        ll sum = 0;
        for(int &i : v) {
            cin >> i;
            sum += abs(i);
        }
        int c = 0, flag = 0, k = 1;
        for(int i = 0; i < n; i++) {
            if(flag and v[i] <= 0) continue;
            else if(!flag and v[i] < 0) k++, flag = 1;
            else if(flag and v[i] > 0) flag = 0;
            
        }
        cout << sum << " " << k - 1 << "\n";

    }
    return 0;
}