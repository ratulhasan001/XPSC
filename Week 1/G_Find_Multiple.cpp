#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int i = a;
    while(1) {
        if(i % c == 0) {
            cout << i << '\n';
            return 0; 
        }
        i++;
        if(i > b) break;
    }
    cout << "-1\n";
    return 0;
}