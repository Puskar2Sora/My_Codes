int countSetBits(int n) {
   
    if(n == 0) return 0;
  
    int x = 0, p=1;
    
    while(p*2<= n)
    {
        p*=2;   
        x++;
    }
    int b1 = x*(p/2);
    int b2 = n-p+ 1;
    int b3 = countSetBits(n-p);
    
    return b1+b2+b3;
}
