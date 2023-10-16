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
    
        int n;
        ll sum = 0;
        cin >> n;
        priority_queue<int>p;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x == 0 and !p.empty()) {
                sum += p.top();
                p.pop();
            }
            else p.push(x);
        }
        cout << sum << '\n';
    }
    return 0;
}