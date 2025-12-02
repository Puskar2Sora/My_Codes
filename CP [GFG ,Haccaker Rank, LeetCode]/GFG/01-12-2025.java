class Solution {
      static class sora
      {
        sora[] bit = new sora[2];
        int count = 0; 
      }
    sora root = new sora();
    void insert(int num) {
        sora curr = root;
        for (int i = 31; i >= 0; i--) {
            int b = (num >> i) & 1;
            if (curr.bit[b] == null) 
                curr.bit[b] = new sora();
            curr = curr.bit[b];
            curr.count++;    }}
    int countLess(int num, int k) {
        sora curr = root;
        int ans = 0;
        for (int i = 31; i >= 0; i--) {
            if (curr == null) 
                break;
            int nbit = (num >> i) & 1;
            int kbit = (k >> i) & 1;
            if (kbit == 1) {
                if (curr.bit[nbit] != null)
                    ans += curr.bit[nbit].count;
                curr = curr.bit[nbit ^ 1];
            }
            else 
                curr = curr.bit[nbit];
        }
        return ans;}
    public int cntPairs(int[] arr, int k) {
        int r = 0;
        for (int num : arr) 
        {
            r += countLess(num, k);  
            insert(num);             
        }
        return r;  
    }
}
