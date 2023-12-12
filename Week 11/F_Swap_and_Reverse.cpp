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
    cin >> n >> k;
    string s;
    cin >> s;
    if (k % 2 == 0) {
        sort(s.begin(), s.end());
        cout << s << '\n';
        return;
    }

    string nw = "";
    vector < vector < int >> tot(26, vector < int > (2, 0));
    for (int i = 0; i < n; i++) {
        tot[s[i] - 'a'][i % 2]++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 26; j++) {
            if (tot[j][i % 2] > 0) {
                tot[j][i % 2]--;
                nw += (j + 'a');
                break;
            }
        }
    }
    cout << nw << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}