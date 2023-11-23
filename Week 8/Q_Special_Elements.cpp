#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    	int n;
		cin >> n;
		vector<int> v(n);
		unordered_map < int, int > mp;
		int ans = 0;
		for (auto &i : v) {
			cin >> i;
			mp[i]++;
		}
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = i; j < n; j++) {
				sum += v[j];
				if (i == j) continue;
				if (sum <= n) {
					ans += mp[sum];
					mp[sum] = 0;
				}
			}
		}
		cout << ans << '\n';
    }
    return 0;
}