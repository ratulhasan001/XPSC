//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	    // code here
	    int k = p.size();
	    int frq[26] = {0};
	    for(char c : p) {
	    
	        frq[c - 'a']++;
	    }
	    int i = 0, j = 0, ans = 0;
	    int frs[26] = {0};
	    while(j < s.size()) {
	        frs[s[j] - 'a']++;
	        if(j >= k - 1) {
	            bool flag = true;
	            for(int c = 0; c < 26; c++)
	            {
	                if(frq[c] != frs[c]) {
	                    flag = false;
	                    break;
	                }
	            }
	            if(flag) ans++;
	            frs[s[i] - 'a']--;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends