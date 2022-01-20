// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
    {
         public:
    vector<string>ret;
    void fill(int a,int b,string s){
        if(a==0 and b==0){ret.push_back(s);return;}
        if(a>=0)fill(a-1,b,s+"(");
        if(b>a)fill(a,b-1,s+")");
    }
    vector<string> AllParenthesis(int n) 
    {
        fill(n,n,"");
        return ret;
    
        // Your code goes here 
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends