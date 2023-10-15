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
    
        string str="314159265358979323846264338327";
        string str2;

        int cnt = 0;
        cin>>str2;
        for (int i = 0; i < str2.length(); i++) {
            if(str[i] == str2[i]) cnt++;
            else break;
        }
        cout<< cnt << '\n';

    }
    return 0;
}