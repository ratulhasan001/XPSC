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
    
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if(a == b){
            cout << 0 << '\n';
        }
        else if(abs(a-b) >= x){
            cout << 1 << '\n';
        }
        else if(r - a >= x and r - b >= x){
            cout << 2 << '\n';
        }
        else if(a - l >= x and b - l >= x){
            cout << 2 << '\n';
        }
        else if(abs(a-b) < x){
            if(abs(a - l) < x and abs(a - r) < x){
                cout << -1 << '\n';
            }
            else if(b > a and abs(l - b) < x){
                cout << -1 << '\n';
            }
            else if(b < a and abs(r - b) < x){
                cout << -1 << '\n';
            }
            else{
                cout << 3 << endl;
            }
        }
        else{
            cout << 3 << endl;
        }
    }
    return 0;
}