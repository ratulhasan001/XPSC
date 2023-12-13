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
    bool ok = true;
    vector < int > a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) {
        if(a[i] != a[n - i + 1]) {
            ok = false;
            vector < int > temp, check;
            temp = a;
            // remove a[i]
            temp.erase(remove(temp.begin(), temp.end(), a[i]), temp.end());
            temp.erase(remove(temp.begin(), temp.end(), 0), temp.end());
            check = temp;
            reverse(check.begin(), check.end());
            if(check == temp) {
                cout << "YES" << '\n';
                return;
            }
            debug(check, temp);
            // remove a[n - i + 1]
            temp = a;
            temp.erase(remove(temp.begin(), temp.end(), a[n - i + 1]), temp.end());
            temp.erase(remove(temp.begin(), temp.end(), 0), temp.end());
            check = temp;
            reverse(check.begin(), check.end());
            if(check == temp) {
                cout << "YES" << '\n';
                return;
            }
            debug(check, temp);
            break;
        }

    }
    cout << (ok ? "YES" : "NO") << '\n';
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