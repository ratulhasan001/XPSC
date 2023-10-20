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
    
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s; 
        map<char,int>u;
        map<char,int>l;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(islower(s[i])) l[s[i]]++;
            else u[s[i]]++;
        }
        for(char i = 'a' ; i <= 'z'; i++) {
            cnt += min(u[toupper(i)],l[i]);
            int tmp = min(k, abs(u[toupper(i)] - l[i]) / 2);
            cnt += tmp;
            k -= tmp;
        }
        cout << cnt <<'\n';
    }
    return 0;
}