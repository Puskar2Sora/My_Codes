n=int(input("Enter the 1st no.="))
m=int(input("Enter the 2nd no.="))
if n%2!=0 and m%2!=0:
    if abs(n-m)==2:
        print("Twin Prime")
    else:
        print("Not Twin Prime")

