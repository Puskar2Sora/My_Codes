x={}
n=int(input("Enter the range="))
for i in range(0,n,1):
    k=int(input("Enter the key="))
    x[k]=input("Enter the value=")
print(x.items())
print("Press 1 if you want to search value wise\n Enter 2 if you want to search key wise")
l=int(input("Enter your choice="))
if l==1:
    m=input("Enter the value=")
    for k,v in x.items():
         if v.lower()==m.lower():
             print(v," found at",k,"Key")
             break
    f=k
    g=int(input("Press 3 for delete the value="))
    if g==3:
        x.pop(f)
        print("Deletion Success!!!")
    print("Dictionary after deletion=",x.items())
elif l==2:
    j=int(input("Enter the key="))
    for k,v in x.items():
        if j==k:
            print("key found!!!")
            break
    b=int(input("press 4 for the deletion of the key="))
    r=k
    if b==4:
        x.pop(r)
        print("Deletion Success!!!!")
    print("Dictionary after deletion =",x.items())
else:
    print(" valoiiii bollll vul val likhchis !!!! Muthhhhh mere neeeeee")
