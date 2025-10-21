x={}
n=int(input("Enter the range"))
for i in range(0,n,1):
    k=4
    x[k]=input("Enter the string=")
print(x.items())
y=int(input("Enter the key to be searched="))
f=0
for k,v in x.items():
    if k==y:
        f=1
        break
if f==0:
    print("Key Not Found")  
elif:
    print(v,"found at",k,"Key")
else:
    print("That is the no.")

