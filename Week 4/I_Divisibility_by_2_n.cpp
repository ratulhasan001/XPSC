#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int count(int n) {
    int cnt = 0;
    while(n % 2 == 0) n /= 2, cnt++;
    return cnt;
}
 
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n, cnt = 0, extra = 0;
        cin >> n;
        vector<int>v(n), a;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            cnt += count(v[i]);
            extra += count(i + 1);
            a.push_back(count(i + 1));
        }
        if(cnt >= n) cout << "0" << '\n';
        else if(cnt + extra < n) cout << "-1" << '\n';
        else {
            int res = 0;
            ranges :: sort(a);
            ranges :: reverse(a);
            for(auto x : a) {
                res++;
                if(x + cnt >= n) break;
                cnt += x;
            }
            cout << res << '\n';

        }
        

    }
    return 0;
}