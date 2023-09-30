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

    float a, b, t;
    cin >> a >> b >> t;
    int k = 1, sum = 0;
    t += 0.5;
    float count = a;
    while (count < t) {
        sum += b;
        k++;
        count = a * k;
    }
    cout << sum << '\n';
    return 0;
}