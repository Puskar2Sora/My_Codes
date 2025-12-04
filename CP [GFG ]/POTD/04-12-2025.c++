class Solution {
  public:
    int minCost(vector<int> &keys, vector<int> &freq) {
        int n = keys.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        vector<int> p(n+1, 0);

        for (int i = 0; i < n; i++)
            p[i+1] = p[i] + freq[i];

        auto s = [&](int i, int j) {
            return p[j+1] - p[i];
        };
        for(int i = 0; i < n; i++)
             dp[i][i] = freq[i];

        for(int len = 2; len <= n; len++) {
            for(int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                dp[i][j] = INT_MAX;
          for(int r = i; r <= j; r++) {
                    int left = (r > i) ? dp[i][r-1] : 0;
                    int right = (r < j) ? dp[r+1][j] : 0;
                    int cost = left + right + s(i, j);
                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }
        return dp[0][n-1];
    }
};