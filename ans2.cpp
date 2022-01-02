// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

//class Solution {
  //public:
  //  int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
    

//Code:
//#include<bits stdc++.h="">
//using namespace std;
struct Point
{
int x, y;
};

// Returns true if two rectangles (l1, r1) and (l2, r2) overlap
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
// If one rectangle is on left side of other
if (l1.x > r2.x || l2.x > r1.x)
return false;

// If one rectangle is above other
if (l1.y < r2.y || l2.y < r1.y)
return false;

return true;
}

// Driver program to test above functions
int main()
{
int t;
cin>>t;
while(t--)
{
struct Point p1,q1,p2,q2;
cin>>p1.x>>p1.y>>q1.x>>q1.y;
cin>>p2.x>>p2.y>>q2.x>>q2.y;
int result = doOverlap(p1,q1,p2,q2);
if(result)
{
cout<<"1"<<endl; }="" else="" {="" cout<<"0"<<endl;="" }="" }="" return="" 0;="" }="">
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends