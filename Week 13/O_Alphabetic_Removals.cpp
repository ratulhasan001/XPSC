#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    map < char, int > mp;
    for(auto c : s) mp[c]++;
    bool ok = false;
    int temp = k;
    char start = 'a';
    for(char i = 'a'; i <= 'z' and k > 0; i++) {
        for(int j = 0; j < n and k > 0; j++) {
            if(s[j] == i) {
                s[j] = '#';
                k--;
                mp[i]--;
                if(mp[i] == 0) {
                    break;
                }
            }
        }
    }
    // debug(s);
    for(char c : s) if(c != '#') cout << c;
    cout << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;  
    // cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}