//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int s) 
    { 
        int sum = 0, mx = 0;
        map<int,int>mp;
        mp[0] = -1;
        for(int i = 0 ; i < n; i++) {
            sum += a[i];

            if(mp.find(sum - s) != mp.end()) {
                mx = max(mx, i - mp[sum - s]);
            }
            
            if(mp.find(sum) == mp.end()) mp[sum] = i;
        }
        return mx;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends