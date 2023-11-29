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
    vector< int > v(n + 1), mp(31, 0), Final;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        for(int j = 30; j >= 0; j--){
            if(((v[i] >> j) & 1)) mp[j]++;
        }
    }
    debug(v, mp);
    for(int i = 1; i <= n; i++){
        bool ok = true;
        for(int j = 30; j >= 0; j--){
            if(mp[j] % i){
                ok = false;
                break;
            }
        }
        if(ok) Final.push_back(i);
    }
    for(auto x : Final) cout << x << ' '; 
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