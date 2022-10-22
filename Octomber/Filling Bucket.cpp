class Solution {
  public:
    int mod=1e8;
    int fillingBucket(int N) {
        // code here
        if(N<=3)
            return N;
        
        int prev1 = 1;
        int prev2 = 2;
        
        for(int i=1;i<=N-2;i++)
        {
            int curr =(prev1+prev2)%mod;
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};
