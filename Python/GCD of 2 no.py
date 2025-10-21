n=int(input("Enter a 1st no="))
k=int(input("Enter 2 no.="))
i=1
while(n>i):
   if n%i==0:
      print(n//i,end=" ")
   i+=1
print()
m=1
while(k>m):
    if k%m==0:       
      print(k//m,end=" ")
    m+=1
if n%i==k%m:
    print("Gcd=",i)
   