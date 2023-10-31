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
    
        string s;
        cin >> s;
        vector<pair<char,int>>m;
        int n = s.size();
        for (int i = 0; i < n; i++) m.push_back({s[i],i});

        sort(m.begin(),m.end());
    
        char first_char = s[0], last_char = s[n - 1];
        int first_index = 0, last_index = n - 1;
    
        vector<int> ans;
    
        if (s[first_index] < s[last_index]) {
            for (auto x : m) {
                if (x.first < first_char or x.first > last_char) continue;
                    
                if (((x.first == first_char) and (x.second == first_index)) or (x.first ==   last_char and x.second == last_index)) continue;
                    
                ans.push_back(x.second);
            }
        }
        else {
            for (auto x : m) {
                if (x.first < last_char or x.first > first_char) {
                    continue;
                }
                if (((x.first == first_char) and (x.second == first_index)) or (x.first ==   last_char and x.second == last_index)) {
                    continue;
                }
                ans.push_back(x.second);
            }
            ranges :: reverse(ans);
    
        }
        cout << abs(first_char - last_char) << " " << ans.size() + 2<< '\n';
        cout << first_index + 1 << " ";
        for(auto l : ans) cout << l + 1 <<" ";
 
        cout<< last_index + 1 << '\n';
    }
    return 0;
}
