#set union,set difference, set intersection
import math
st1=set()
st2=set()
st3=set()
n=int(input("Enter the Range = "))
for i in range(0,n,1):
    st1.add(int(input("Enter the No. for 1st Set =")))
    st2.add(int(input("Enter the No. for 2nd Set =")))
print("Set 1 = ",st1)
print("Set 2 = ",st2)
st3 = st1 | st2 
print("Set Union = ",st3)
st3 = st1 & st2 
print("Set intersection = ",st3)    
st3=abs(st1 - st2)
print("Set difference (st1 -st2)= ",st3)    
'''st3=st2 - st1
print("Set difference (st2 -st1)= ",st3)'''