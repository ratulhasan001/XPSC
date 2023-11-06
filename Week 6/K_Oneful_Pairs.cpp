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

    int a , b;
    cin >> a >> b;
    cout << ((a + b + (a * b) ) == 111 ? "Yes" : "No") << '\n';
    return 0;
}