class Solution {
    public static ArrayList<Integer> subsetXOR(int n) {
        ArrayList<Integer> a = new ArrayList<>();
        int x = 0;
        for (int i = 1; i <= n; i++)
            x =x^i;
        int r = (x == n) ? -1 : (x ^ n);
        for (int i = 1; i <= n; i++)
        {
            if (i != r) 
               a.add(i);
        }

        return a;
     }
}
