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
    int n, d, k;
    cin >> n >> k >> d;
    int a[n];
    vector < int > v;
    set < int > s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < d; i++) {
        v.push_back(a[i]);
        s.insert(a[i]);
    }
    int cnt = s.size(), ans = cnt;
    for (int i = d; i < n; i++) {
        s.clear();
        v.push_back(a[i]);
        v.erase(v.begin());
        for (int j = 0; j < (int)v.size(); j++) {
            s.insert(v[j]);
        }
        cnt = s.size();
        ans = min(ans, cnt);
    }
    cout << ans << '\n';
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