class Solution {
  public:
    int findPosition(int N , int M , int K) {
          if (M <= N - K + 1)
       return M + K - 1;

   
   M = M - (N - K + 1);

   
   return (M% N == 0) ? N : (M % N);
}

};
        

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  // } Driver Code Ends