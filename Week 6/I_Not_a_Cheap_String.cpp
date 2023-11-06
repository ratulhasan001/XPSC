#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int weight(string s) {
    int x = 0;
    for(char c : s) x += c - 'a' +  1;
    return x;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        string s;
        int w;
        cin >> s >> w;
        int n = s.size();
        
        if(w >= weight(s)) {
            cout << s << '\n';
            continue;
        }
        int x = weight(s);
        string temp = s , ans;
        sort(s.begin(), s.end());
        for(int i = n - 1; i >= 0; i--) {
            x -= s[i] - 'a' + 1;
            s.pop_back();
            if(x <= w) break;
        }   
        unordered_map<char,int>mp;
        for(char c : s) mp[c]++;
        for(char c : temp) {
            if(mp[c] == 0) continue;
            ans += c;
            mp[c]--;
        }
        cout << ans << '\n';
    }
    return 0;
}