class Check_if_array_is_sorted{
    public boolean isSorted(int[] arr) {
        // code here
        int f=0;
        for(int i=0;i<arr.length-1;i++)
        {
            if(arr[i]>arr[i+1]) 
               return false;
        }
        return true;
    }
}