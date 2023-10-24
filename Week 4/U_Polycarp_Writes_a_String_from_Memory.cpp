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
    
        string x;
        cin >> x;
        int n = x.size(), k = 0, cnt = 0;
        map<char,int>mp;
        for(int i = 0; i < n; i++) {
            if(mp[x[i]] == 0 and k == 3) k = 0,cnt++;
            else if(mp[x[i]]) {
                if(i == n - 1) cnt++;
                continue;
            }
            else {
                mp[x[i]]++, k++;
            }
            if(i == n - 1 and k > 0) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}