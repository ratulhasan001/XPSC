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
    vector < int > v(n);
    for(int &i : v) cin >> i;
    int mx = INT_MAX, pos = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] < mx) {
            mx = v[i];
            pos = i;
        }
    }
    cout << n - 1 << '\n';
    for (int i = 0; i < n; i++) {
        if (i == pos) continue;
        cout << pos + 1 << ' ' << i + 1 << ' ' << mx << ' ' << mx + abs(i - pos) << "\n";
    }
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