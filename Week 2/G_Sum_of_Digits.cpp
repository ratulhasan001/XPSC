#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

string final(string s) {
    ll sum = 0;
    for(char c : s) {
        sum += c - '0';
    }
    stringstream ss;
    ss << sum;
    return ss.str();
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s;
    cin >> s;
    while(s.size() > 1) {
        s = final(s);
        cnt++;
    }   
    cout << cnt << '\n';
    
    return 0;
}