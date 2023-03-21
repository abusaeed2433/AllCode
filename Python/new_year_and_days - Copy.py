n=input()
if n[len(n)-1]=="h":
    s=n[0]+n[1]
    s=int(s)
    if s==31:
        print("7")
    elif s==30:
        print("11")
    else:
        print("12")
else:
    s=n[0]
    s=int(s)
    if s==5 or s==6:
        print("53")
    else:
        print("52")
