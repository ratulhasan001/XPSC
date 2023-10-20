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
    
        int n,s;
        cin >> n >> s;
        int a, mx = 0;
        map<int,bool>mp;
        for(int i = 0; i < n; i++) {
            cin>>a;
            mx= max(mx, a);
            mp[a] = true;
        }
        int sum=0, flag = 0;
        for(int i = 1; i <= 100; i++) {

            if(!mp[i]) sum += i;
            if(sum == s and i >= mx){
                flag = 1;
                break;
            }
            if(sum>s) break;
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}