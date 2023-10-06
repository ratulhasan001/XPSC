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
        cin >> n;
        int a[n];
        set<int>s;
        for(int i = 0 ; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int setSize = s.size();
        if(n % 2 == 0) {
            if(setSize % 2 == 0) cout << setSize << '\n';
            else {
                if(setSize == 1) cout << "0" << '\n';
                else cout << setSize - 1 << '\n';  
            }
        }
        else {
            if(setSize % 2 == 0) cout << setSize - 1 << '\n';
            else {
                if(setSize == 1) cout << "1" << '\n';
                else cout << setSize << '\n';  
            }
        }
    }
    return 0;
}