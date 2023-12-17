#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n) {
    if (n == 2 || n == 3) {
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--> 0) {
        ll n;
        cin >> n;
        ll sq = sqrt(n);
        cout << (isPrime(sq) and sq * sq == n ? "YES" : "NO") << '\n' ;
    }
    
    return 0;
}