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
    vector < int > a(n + 1);
    vector < int > b(n + 1);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    if(a == b) {
        cout << "YES" << '\n';
        return;
    }
    a[n] = a[0];
    b[n] = b[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > b[i]) {
            cout << "NO" << '\n';
            return;
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i] and b[i] > b[i + 1] + 1) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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