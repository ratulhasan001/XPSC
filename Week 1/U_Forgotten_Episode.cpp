#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n-1];
    int b[n];
    for(int i = 0; i < n - 1; i++) cin >> a[i];
    for(int i = 0; i < n ; i++) b[i] = i + 1;
    sort(a,a + n - 1 );
    debug_array(b,n);
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            cout << b[i] << '\n';
            break;
        }
    }
    return 0;
}