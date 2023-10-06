#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) {
            int k;
            string s;
            cin >> k >> s;
            for(int j = 0; j < k; j++) {
                if(s[j] == 'U') {
                    if(a[i] == 0) {
                        a[i] = 9;
                    }
                    else a[i]--;
                }
                if(s[j] == 'D') {
                    if(a[i] == 9) a[i] = 0;
                    else a[i]++;
                }
            }
        }
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << '\n';
    }

    return 0;
}