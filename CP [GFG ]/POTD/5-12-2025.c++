class Solution {
  public:
    int minCost(vector<vector<int>> &costs) {
        int n=costs.size();
        if(n==0)
            return 0;
        int k = costs[0].size();
        if (k==1) 
            return (n==1 ? costs[0][0]:-1);  
        vector<int> dp(k), newdp(k);
        
        for (int j=0; j<k; j++) 
            dp[j]=costs[0][j];
        for (int i=1; i<n; i++) 
        {
            int min1=INT_MAX, min2 = INT_MAX, idx1 = -1;
            for (int j=0; j<k; j++) {
                if (dp[j] < min1) {
                    min2=min1;
                    min1=dp[j];
                    idx1=j;
                } else if (dp[j] < min2) {
                    min2=dp[j];
                }
            }
            for (int j=0; j<k; j++) {
                newdp[j]=((j==idx1)? costs[i][j]+min2 : costs[i][j]+min1);
            }
            dp=newdp; 
        }
       
        int ans=*min_element(dp.begin(), dp.end());
        return ans;
    }
};