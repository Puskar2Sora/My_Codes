class Reverse_an_array{
    public void reverseArray(int arr[]) {
        // code here
        int s=0,e=arr.length-1;
        while(s < e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
    }
}