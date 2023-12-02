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
    int n, m;
    cin >> n >> m;
    int next = m + 1;
    for(int i = 1; i < n; i += 2){
        for(int j = 0; j < m; j++){
            cout << next++ << " ";
        }
        next += m;
        cout << "\n";
    }
    next = 1;
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < m; j++){
            cout << next++ << " ";
        }
        next += m;
        cout << "\n";
    }
    cout << '\n';
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