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
    string x, y;
    cin >> x >> y;
    int a = x.size(), b = y.size();
    if(x[0] != y[0] or x[a - 1] != y[b - 1]) {
        cout << "NO" << '\n';
        return;
    }
    if((a == b and x != y) or a > b) {
        cout << "NO" << '\n';
        return;
    }
    map < char, int > mpx;
    map < char, int > mpy;
    for(char c : x) mpx[c]++; 
    for(char c : y) mpy[c]++; 
    if((int)mpx.size() != (int)mpy.size()) {
        cout << "NO" << '\n';
        return;
    }
    for(char c : y) {
        if(mpx[c] > mpy[c]) {
            cout << "NO" << '\n';
            return;
        }
    }
    int i = 0, j = 0, cnt = 0;
    bool ok = true;
    while(i < a and j < b) {
        if( x[i] == y[j]) cnt++, i++, j++;
        else if(i and y[j] == x[i - 1]) j++;
        else {
            ok = false;
            break;
        }
    }

    while(j < b)
    {
        if( x[a - 1] != y[j] ) {
            ok = false;
            break;
        }
        j++;
    }

    cout << (ok and cnt == a ? "YES" : "NO") << '\n';

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