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
    int n;
    cin >> n;
    vector < int > v(n);
    for(auto &i : v) cin >> i;
    if(is_sorted(v.begin(), v.end())) {
        cout << 0 << '\n';
        return;
    }
    vector < int > ok(n);
    for(int i = 0; i < n; i++) {
        v[i]--;
        ok[v[i]] = i;
    }
    debug(v,ok);
    int left = n / 2, right = n - left;
    while (left > 0 and ok[left - 1] < ok[left] and ok[right] > ok[right - 1]) left--, right++;
        
    cout << left << '\n';

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