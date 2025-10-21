li=[]
n=int(input("Enter the Range of the list="))
for i in range(1,n+1,1):
    li.append(int(input("Enter the Element=")))
print("LIst=",li)
c=0
x=int(input("Enter the element to be searched="))
for j  in li:
    if j==x:
        c+=1 
        del(x)
print(x,"Found ",c,"Times")
print("Deletion Success!!!")
print("List after deletion---",li)
 

