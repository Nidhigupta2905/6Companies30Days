class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k)
    {
     
     long long runProd = 1, ans = 0, start = 0, end = 0;
        while(end < n) {
            runProd *= a[end];
            while(runProd >= k)
                runProd /= a[start++];
            ans += end - start + 1;
            end++;
        }
        return ans;
    }
};   
    