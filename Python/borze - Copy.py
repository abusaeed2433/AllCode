s=input()
x=len(s)
for i in range(0,x):
    if s[i]==".":
        print("0")
    else:
        if s[i+1]=="-":
            print("2")
        else:
            print("1")
        i=i+2
