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
        for(int &i : v) cin >> i ;
        string s;
        cin >> s;
        int flag = 0;
        for(int i = 0; i < n; i++) {
            int check = v[i];
            char ch = s[i];
            for(int j = 0; j < n; j++) {
                if((v[j] == check and s[j] != ch)) {
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        cout << (flag ? "NO" : "YES") << '\n';
        



    }
    return 0;
}