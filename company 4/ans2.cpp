// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n<=2)
return n;
unordered_set<int> s(A, A+n);
int res = 2, diff, ele, temp;
for(int i=0; i<n-1; i++)="" {="" for(int="" j="i+1;" j<n;="" j++)="" {="" diff="A[j]-A[i];" ele="A[j]+diff;" temp="2;" while(s.find(ele)!="s.end())" {="" temp++;="" ele="" +="diff;" }="" res="max(res," temp);="" }="" }="" return="" res;="" }="" <="" code="">
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends