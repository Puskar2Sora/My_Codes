class Solution {
    public String matrixChainOrder(int arr[]) {
        // code here
        int n = arr.length - 1, s[][] = new int[n][n], split[][] = new int[n][n];
        
        for(int h= 2;h<=n;h++)
        {
            for(int i = 0; i+h- 1<n; i++)
            {
                int j = i + h- 1;
                s[i][j] = Integer.MAX_VALUE;
                
                for(int k = i; k < j; k++)
                {
                 int c=s[i][k]+s[k+1][j]+arr[i]*arr[k+1]*arr[j+1];
                    if(c<s[i][j])
                    {
                        s[i][j]=c;
                        split[i][j]=k;
                    }
                }
            }
        }
        return build(0, n-1, split);
    }
    private String build(int i, int j, int split[][])
    {
        if(i == j)
            return String.valueOf((char)('A' + i));
        int k = split[i][j];
        return "(" + build(i, k, split) + build(k+1, j, split) + ")";
    }
}