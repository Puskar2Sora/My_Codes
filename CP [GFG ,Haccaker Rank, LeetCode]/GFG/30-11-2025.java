import java.util.*;
class Solution {
     static class kb 
     {
        kb[] sora= new kb[26];
     }
    public static int countSubs(String s) 
    {
        kb root = new kb();
        int c= 0;
        
        for (int i=0; i<s.length(); i++) {
            kb cu = root;
            
            for (int j = i; j < s.length(); j++) 
            {
                int id= s.charAt(j) - 'a';
                if (cu.sora[id] == null) 
                {
                    cu.sora[id] = new kb();
                    c++; 
                }
                cu= cu.sora[id];
            }
        }
        return c;
    }// code here
        

}