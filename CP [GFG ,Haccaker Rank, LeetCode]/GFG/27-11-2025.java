class Solution {
    int subsetXORSum(int arr[]) {
        int k = 0;
        for(int i = 0; i < arr.length; i++)
            k = k | arr[i];
        return k << (arr.length - 1);
    }

}