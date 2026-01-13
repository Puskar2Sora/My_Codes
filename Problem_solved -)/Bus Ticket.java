import java.util.*;
class Solution {
    public boolean canServe(int[] arr) {
      int f=0,t=0;
       for(int i=0;i<arr.length;i++)
       {
           if(arr[i]==5)
             f++;
           else if(arr[i]==10)
           {
               if(f==0)
                 return false;
               f--;
               t++;
           }
           else if(arr[i]==20)
           {
               if(f>0 && t>0)
               {
                   t--;
                   f--;
               }
               else if(f>=3)
                f -=3;
               else
                 return false;
           }
       }// code here
     return true;   
    }
}