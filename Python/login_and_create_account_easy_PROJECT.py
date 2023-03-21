def checker(un):
    z=0
    if len(un)>=15:
        z=2
        return z
    else:
        for i in range(0,len(un)):
            if un[i]<='z' and un[i]>='a' or un[i]>='A' and un[i]<='Z':
                continue
            else:
                if un[i]>='0' and un[i]<='9':
                    continue
                else:
                    z=1
                    break
        return z

#2nd function
def user():
    print("type 2 to exit")
    ex=int(input())
    return ex

#3rd function
def checker2(un,psd):
    file=open(r"C:\Users\user\OneDrive\Documents\Python\text_file\text_1.txt","r")
    z=0
    zz=0
    for line in file:
        if un+' '==line[0:len(un)+1]:
            z=1
            if psd in line:
                zz=1
                break
            else:
                zz=0
        else:
            continue
    file.close()
    return z,zz

#4th function
def account():
    print("type 1=YES, 2=Try again, 3=exit")
    ac=int(input())    
    return ac


#5th function
def create():
    print("Conditions:\n1.username should contain only a-z,A-Z,0-9\n2.username mustnot contain more than 15 letters")
    tttt=1
    while tttt:
        un=input("Enter username:")
        z=checker(un)
        if z==0:
            file=open(r"C:\Users\user\OneDrive\Documents\Python\text_file\text_1.txt","r")
            dd=2
            kkk=1
            ppp=0
            while dd:
                zzz=0
                for line in file:
                    if un+' '==line[0:len(un)+1]:
                        zzz=1
                        ppp=1
                        break
                    else:
                        continue
                if zzz==1:
                    un=un+str(kkk)
                    if len(un)>=15:
                        un=un[0:3]+un[7:10]
                        kkk+=2
                    else:
                        kkk+=1
                else:
                    break
            if ppp==1:
                print("username already exists. use a different one. Suggested name: %s"%un)
                
            else:
                psd=input("password:")
                un_psd=un+' '+psd
                file=open(r"C:\Users\user\OneDrive\Documents\Python\text_file\text_1.txt","a")
                file.write("\n")
                file.write(un_psd)
                file.close()
                print("account created successfully. Please login to continue")
                ttt=1
                return ttt
                break
        else:
            print("condition not fulfilled. Try again")
            create()



print("W E L C O M E  T O  U N K N O W N _S I T E")

print("1=login, 2=create account")
acc=int(input())
if acc==1:
    t=5
    tt_ttt=0
    while t:
        un=input("username:")
        z=checker(un)
        if z==2:
            print("length of username shouldnot exceed 15")
            ex=user()
            if ex==2:
                print("exitted successfully")
                break
            else:
                print("try again")
        elif z==1:
            print("username must contain letters a-z,A-Z,0-9. space is not allowed")
            ex=user()
            if ex==2:
                print("exitted successfully")
                break
            else:
                print("try again")
        else:
            tt=2
            while tt:
                ttt=0
                psd=input("password:")
                z,zz=checker2(un,psd)
                if z==1 and zz==1:
                    print("Logged in successfully")
                    print("Welcome @%s, This site is under development"%un)
                    print("there is nothing in this website. wait until i make this site")
                    ttt=1
                    tt_ttt=1
                    break
                elif z==1 and zz==0:
                    print("Wrong password")
                    print("type 2 to exit else continue")
                    ex=int(input("command:"))
                    if ex==2:
                        print("exitted successfully")
                        break
                    else:
                        continue
                else:
                    print("username didnot matched")
                    print("Do you want to create new account?")
                    ac=account()
                    if ac==1:
                        ttt=create()
                    elif ac==2:
                        break
                    else:
                        ttt=1
                        tt_ttt=1
                        print("exitted succesfully")
                        break
                if ttt==1:
                    break
                else:
                    continue
            if tt_ttt==1:
                break
            else:
                continue
elif acc==2:
    create()
    print("please run again and login")
else:
    print("run again")
                




        
