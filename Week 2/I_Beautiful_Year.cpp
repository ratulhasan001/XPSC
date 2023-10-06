#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int check(int n) {
    stringstream ss;
    ss << n;
    string x = ss.str();
    set<char>s;
    for(char c : x) {
        s.insert(c);
    }
    return (s.size() == x.size() ? n : -1);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(true) {
        n++;
        if(check(n) != -1) {
            cout << n << '\n';
            break;
        }
    }
    return 0;
}