x=input("Enter the 1st word=")
y=input("Enter the 2nd word=")
x=x.upper()
y=y.upper()
if len(x)==len(y):
    for i in x:
        if i not in y:
            print("Not Anangram String")
            exit()
    for j in y:
        if j not in x: 
            print("Not Anangram string")
            exit()
    print("Anangram String")
else:
    print("Not Anangram string")