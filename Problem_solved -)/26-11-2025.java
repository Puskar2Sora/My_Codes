class Solution {
    public int andInRange(int l, int r) {
        int s=0;
        while(l<r)
        {
            l >>=1;
            r >>=1;
            s++;
        }
        // Code here
      return l << s;  
    }
}
