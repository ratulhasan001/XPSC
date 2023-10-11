#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif


int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long i = 0, j = 0, sum = 0, mx = 0;
    int n = a.size();
    while(j < n) {
        sum += a[j];
        while(sum > k) {
            sum -= a[i];
            i++;
        }
        if(sum == k) mx = max(mx, j - i + 1);
        j++;
    }
    return mx;
}