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

    vector<string>ans;
    for(char i = 'a'; i <= 'z' ; i++) {
        for(char j = 'a'; j <= 'z'; j++) {
            if(i == j) continue;
            string x;
            x.push_back(i);
            x.push_back(j);
            ans.push_back(x);
        }
    }
    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        string s;
        cin >> s;
        for(int i = 0; i < (int)ans.size(); i++) {
            if(ans[i] == s) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}