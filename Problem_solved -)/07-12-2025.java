class Solution {
    int distinctSubseq(String str) {
       
        int mod = 1000000007;

        long[] s = new long[str.length() + 1];
        s[0] = 1;  
        int[] l = new int[26];
        Arrays.fill(l, -1);
        
        for (int i = 1; i <=str.length(); i++) {
           
            int ch = str.charAt(i - 1) - 'a';
            s[i] = (2 * s[i - 1]) % mod;
            if (l[ch] != -1)
                s[i] = (s[i] - s[l[ch] - 1] + mod) % mod;
            l[ch] = i; 
        }
        return (int) s[str.length()];
    }
}