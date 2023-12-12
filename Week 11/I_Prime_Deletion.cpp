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
    string s; cin >> s;

    if(s[0]=='1') {
        cout<<"13"<<'\n';
        return;
    }
    if(s[0]=='2') {
        cout<<"29"<<'\n';
        return;
    }
    if(s[0]=='3') {
        cout<<"37"<<'\n';
        return;
    }
    if(s[0]=='4') {
        cout<<"47"<<'\n';
        return;
    }
    if(s[0]=='5') {
        cout<<"59"<<'\n';
        return;
    }
    if(s[0]=='6') {
        cout<<"67"<<'\n';
        return;
    }
    if(s[0]=='7') {
        cout<<"73"<<'\n';
        return;
    }
    if(s[0]=='8') {
        cout<<"89"<<'\n';
        return;
    }
    if(s[0]=='9') {
        cout<<"97"<<'\n';
        return;
    }
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