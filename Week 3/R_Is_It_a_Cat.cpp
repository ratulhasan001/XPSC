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
        string s,x;
        cin >> n >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0 ; i < n - 1; i++) {
            if(s[i] != s[i + 1]) x+=s[i];
        }
        x.push_back(s[n - 1]);
        
        cout << (x == "meow" ? "YES" : "NO") << '\n';

    }
    return 0;
}