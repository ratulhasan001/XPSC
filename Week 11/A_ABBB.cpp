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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(char c : s) {
        if(c == 'A') a++;
        else {
            if(a != 0) a--;
            else if(b != 0) b--;
            else b++;
        }
    }
    cout << a + b << '\n';
   
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