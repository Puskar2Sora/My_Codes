li=[]
n=int(input("Enter the No.="))
for i in range(1,n+1,1):
    li.append(int(input("Enter a Element=")))
print(li)
print("")
x=int(input("Enter the no. you want to delete="))
for i in li:
    if i==x:
        li.remove(x)
print("DELETION SUCCESS!!!")
print("List After Deletion =")