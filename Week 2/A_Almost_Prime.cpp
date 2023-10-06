#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif


bool isPrime(int n) {
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

    int n;
    cin >> n;
    int flag = 0;
    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 2; j <= n; j++) {
            if(i % j == 0) {
                if(isPrime(j)) cnt++;
            }
        }
        if(cnt == 2) flag++;
    }
    cout << flag << '\n';
    return 0;
}

