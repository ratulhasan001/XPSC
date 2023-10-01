#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n, point = 0;
        cin >> n;
        string s;
        cin >> s;
        map<char,int>mp;
        for(int i = 0; i < n; i++) {
            if(mp[s[i]] == 0) point +=2;
            else point += 1;
            mp[s[i]]++;
        }
        cout << point << '\n';

        
    }
    return 0;
}