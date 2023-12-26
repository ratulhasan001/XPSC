#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int n;
    cin >> n;
    vector < set < int > > v;
    for (int i = 1; i <= n; i++) {
        set < int > temp;
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++) {
            int value;
            cin >> value;
            temp.insert(value);
        }
        v.push_back(temp);
    }
    int ans = 0;
    for (int i = 1; i <= 50; i++) {
        set < int > temp;
        int flag = 0;
        for (int j = 0; j < (int) v.size(); j++) {
            if (v[j].find(i) == v[j].end()) {
                for (auto it: v[j]) {
                    temp.insert(it);
                }
            } else {
                flag++;
            }
        }
        if (flag != 0) {

            ans = max(ans, (int) temp.size());
        }
    }
    cout << ans << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}