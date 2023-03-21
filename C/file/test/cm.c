#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

struct idPass
{
    char name[101];//name = phone(changed later)
    char pass[101];
};

struct STUDENT
{
    char dept[21],roll[21],name[51],phone[21],email[51],addr[101],pass[51];
};

struct TEACHER
{
    char dept[21],name[51],phone[21],email[51],addr[101],pass[51];
};

struct STC_FORMAT//student course format // student_course.txt
{
    char phone[21],cc[20],roll[21],name[51],dept[21];
};
//phone[21],cc[20],roll[21],name[51],dept[21],marks[21];

struct MARKS_FORMAT//ct_marks.txt
{
    char phone[21],cc[20],roll[21],name[51],dept[21],marks[21];
};


char STUDENT_PHONE[21];
char TEACHER_PHONE[21];


int loginUser(char[],char[],int);
struct idPass getNamePass();
char getValidInput();
int handleLogin(int);
void display(int);
void handleAdminPanel();
void handleTeacherPanel();
void addStudent();
void addTeacher();
void remateTeachent(int,int);
int getSelectedInput(int,int);
int doesContainInvalid(char[]);
int convertStringToInt(char[]);
struct STUDENT takeStudentInfo();
struct TEACHER takeTeacherInfo();
int isDuplicateStudentAvailable(struct STUDENT,char[]);
int isDuplicateTeacherAvailable(struct TEACHER,char[]);
void showExtraCommandAdmin(int);
void showExtraCommandTeacher(int);
void searchByRoll(char*);
void searchByName();
void assateCourse(int);
void showAssignedCourses(char *,int);
int isCCAlreadyAssigned(char *,char *);
void handleStudentPanel();
void remRoll(int);
int isCCAssignedToTeacher(char*);
int getTotalStudent(char[],char[],int);
int isMarkAdded(char[],char[],char[]);
void addCTMarks(int);
void showTotalStudents();

int main()
{
    printf("Where do you want to go?\n1.Admin panel\n2.Teacher's panel\n3.Student portal\nCommand:");
    char temp[51];// = gets();
    gets(temp);
    while(temp[0]<49 || temp[0]>51 || temp[1]!=0)
    {
        printf("Please type 1, 2 or 3 only\nCommand:");
        gets(temp);
    }

    int val = (int)temp[0] -48;
    printf("Login to Go Ahead:\n");
    int check = handleLogin(val);
    if(check==1)
    {
        system("cls");
        handleAdminPanel();
    }
    else if(check==2)
    {
        system("cls");
        handleTeacherPanel();
    }
    else if(check==3)
    {
        system("cls");
        handleStudentPanel();
//        printf("Welcome to Student's panel\n");
    }
    return 0;
}

int handleLogin(int optionCheck)
{
    char u_name[101],pass[101];

    struct idPass user = getNamePass();
    strcpy(u_name,user.name);
    strcpy(pass,user.pass);

    if(loginUser(u_name,pass,optionCheck)) //optionCheck: 1 = admin, 2 = teacher, 3 = student
    {
        return optionCheck; //login successful
    }
    else
    {
        printf("Invalid info\n1.Try again \t2.Go Back \t3.Exit\nCommand:");
        char ch = getValidInput();
        //system("cls");
        if(ch=='1')
        {
            handleLogin(optionCheck);
        }
        else if(ch=='2')
        {
            system("cls");
            main();
        }
        else if(ch=='3')
        {
            printf("Program closed. Type any key to close window\n");
            exit(0);
        }
        else
        {
            printf("Something went wrong. Going back to main menu\n");
            main();
        }
    }
}

struct idPass getNamePass()
{
    char u_name[101],pass[101];

    printf("Phone:");

    gets(u_name);
    while(u_name[0]==0)
    {
        printf("Phone can't be empty.\nWrite again: ");
        gets(u_name);
    }

    printf("Password:");
    gets(pass);
    while(pass[0]==0)
    {
        printf("WOW. Empty password.\nWrite password again: ");
        gets(pass);
    }

    struct idPass user;
    strcpy(user.name,u_name);
    strcpy(user.pass,pass);

    return user;

}


char getValidInput()
{
    char temp[51];
    gets(temp);
    while(temp[0]<49 || temp[0]>51 || temp[1]!=0)
    {
        printf("Please type 1, 2 or 3 only\nCommand:");
        gets(temp);
    }
    return temp[0];
}

int loginUser(char name[],char pss[],int check)
{
    FILE *ptr;
    char f_name[25] = "idiot.txt";//default
    if(check==1) strcpy(f_name,"admin_list.txt");//admin
    else if(check==2)strcpy(f_name,"teacher_list.txt");//teacher
    else if(check==3)strcpy(f_name,"student_list.txt");//student
    else
    {
        printf("Something went wrong. Exiting program\n");
        exit(0);
    }

    ptr = fopen(f_name,"r");

    if(ptr==NULL) return 0;

    if(check==1)//admin
    {
        struct idPass user;
        while(fread(&user,sizeof(user),1,ptr)!=0)
        {
            if(strcmp(user.name,name)==0 && strcmp(user.pass,pss)==0)
            {
                fclose(ptr);
                return 1;//user found
            }
        }
    }
    else if(check==2) //teacher
    {
        struct TEACHER user;
        while(fread(&user,sizeof(user),1,ptr)!=0)
        {
            if(strcmp(user.phone,name)==0 && strcmp(user.pass,pss)==0)
            {
                strcpy(TEACHER_PHONE,user.phone);
                fclose(ptr);
                return 1;//user found
            }
        }
    }
    else if(check==3) //student
    {
        struct STUDENT user;
        while(fread(&user,sizeof(user),1,ptr)!=0)
        {
            if(strcmp(user.phone,name)==0 && strcmp(user.pass,pss)==0)//name = phone
            {
                strcpy(STUDENT_PHONE,user.phone);
                fclose(ptr);
                return 1;//user found
            }
        }
    }
    fclose(ptr);

    return 0;//user not found
}

void handleAdminPanel()
{
    char data[8][25]= {"Add teacher(1)","Add student(2)","Update teacher info(3)","Update student info(4)","Remove teacher(5)","Remove student(6)","Assign courses(7)","Update course(8)"};
    printf("Welcome to Admin panel. Type and Go\n\n%*s%*s\n%*s%*s\n%*s%*s\n%*s%*s\n%*s\nCommand: ",25,data[0],25,data[1],25,data[2],25,data[3],25,data[4],25,data[5],25,data[6],25,data[7],25,"Go Back(9)");
    char tm[51];
    gets(tm);
    while(tm[0]<49 || tm[0]>57 || tm[1]!=0)
    {
        printf("Please type 1 to 9 only\nCommand:");
        gets(tm);
    }
    int val = (int)tm[0] -48;
    system("cls");
    switch(val)
    {
    case 1:
        printf("\t<== ADD TEACHER ==>\n");
        addTeacher();
        break;
    case 2:
        printf("\t<== ADD STUDENT ==>\n");
        addStudent();
        break;
    case 3:
        printf("\t<== UPDATE TEACHER ==>\n");
        remateTeachent(0,1);//update teacher
        break;
    case 4:
        printf("\t<== UPDATE STUDENT ==>\n");
        remateTeachent(1,1);//update student
        break;
    case 5:
        printf("\t<== REMOVE TEACHER ==>\n");
        remateTeachent(0,0);//remove teacher
        break;
    case 6:
        printf("\t<== REMOVE STUDENT ==>\n");
        remateTeachent(1,0);//remove student
        break;
    case 7:
        printf("\t<== ASSIGN COURSE ==>\n");
        assateCourse(0);//0 = assign course
        break;
    case 8:
        printf("\t<== UPDATE COURSE ==>\n");
        assateCourse(1);//1 = update course
        break;
    case 9:
        main();//going back to main menu
        break;
    default:
        printf("Something went wrong. Going back to admin panel\n");
        handleAdminPanel();
        break;
    }
}

void handleTeacherPanel()
{
    printf("Welcome to Teacher's panel\n%*s %*s\n%*s %*s\n%*s %*s\nCommand:",25,"Add CT marks(1)",25,"Update CT marks(2)",25,"Find student by roll(3)",25,"Find student by name(4)",25,"Total students(5)",25,"Go Back(6)");
    char tm[51];
    gets(tm);
    while(tm[0]<49 || tm[0]>54 || tm[1]!=0)
    {
        printf("Please type 1 to 6 only\nCommand:");
        gets(tm);
    }
    int val = (int)tm[0] -48;
    system("cls");
    switch(val)
    {
    case 1:
        printf("\t<== ADD CT MARKS ==>\n");
        addCTMarks(0);// 0 = add ct marks
        break;
    case 2:
        printf("\t<== UPDATE CT MARKS ==>\n");
        addCTMarks(1);// 1 = update ct marks
        break;
    case 3:
    {
        printf("\t<== SEARCH BY ROLL ==>\n");
        char arr[51];
        printf("Enter student's roll:");
        gets(arr);
        while(arr[0]==0)
        {
            printf("Can't be empty. Enter roll:");
            gets(arr);
        }
        searchByRoll(arr);
    }
    break;
    case 4:
        printf("\t<== SEARCH BY NAME ==>\n");
        searchByName();
        break;
    case 5:
        printf("\t<== SHOW TOTAL STUDNETS ==>\n");
        showTotalStudents();
        break;
    case 6:
        main();
        break;
    default:
        printf("Something went wrong. Returning to Teacher's panel.\n");
        handleTeacherPanel();
        break;
    }
}

void handleStudentPanel()
{
    printf("WELCOME TO STUDENT PANEL. Type and Go\n\n%*s%*s\n%*s%*s\nCommand: ",25,"Enroll course(1)",25,"Remove course(2)",25,"Show CT marks(3)",25,"Go Back(4)");

    char tm[51];
    gets(tm);
    while(tm[0]<49 || tm[0]>52 || tm[1]!=0)
    {
        printf("Please type 1 to 4 only\nCommand:");
        gets(tm);
    }
    int val = (int)tm[0] -48;

    system("cls");
    switch(val)
    {
    case 1:
        printf("\t<== ENROLL COURSE ==>\n");
        remRoll(0);//enroll course
        break;
    case 2:
        printf("<== REMOVE COURSE ==>\n");
        remRoll(1);//remove course
        break;
    case 3:
        printf("<== SHOW CT MARKS ==>\n");
        break;
    case 4:
        main();
        break;
    default:
        break;
    }
}

void addTeacher()//working fine till now
{
    printf("Enter teacher info:\n");
    //dept name phone email address
    struct TEACHER t1;

    t1 = takeTeacherInfo();//taking input from user

    int tempCheck = isDuplicateTeacherAvailable(t1,NULL);
    if(tempCheck==2)
    {
        printf("\"%s\" IS ALREADY IN TEACHER'S LIST.\n",t1.name);
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
    }
    else if(tempCheck==1)
    {
        printf("SOMEONE IS REGISTERED WITH PHONE NUMBER \"%s\"\n",t1.phone);
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
    }
    else
    {
        //writing to file
        FILE *ptr = fopen("teacher_list.txt","a");
        if(ptr!=NULL)
        {
            fwrite(&t1,sizeof(t1),1,ptr);
            fclose(ptr);
            printf("\n\"%s\" ADDED AS TEACHER SUCCESSFULLY.\n",t1.name);
        }
        else
        {
            printf("Something went wrong.\n");
        }
        fclose(ptr);
        //writing to file above

        printf("1.Add another\t2.Go Back\t3.Exit\nCommand:");
    }

    //show try again
    {
        char ch = getValidInput();
        if(ch=='1')
        {
            addTeacher();
        }
        else if(ch=='2')
        {
            system("cls");
            handleAdminPanel();
        }
        else if(ch=='3')
        {
            printf("Program closed.\n");
            exit(0);
        }
        else
        {
            printf("Something went wrong. Going back to Admin panel\n");
            handleAdminPanel();
        }
    }
    //show try again above
}


void addStudent()//working fine till now
{
    printf("Enter student info:\n");

    //dept roll name phone email address

    struct STUDENT t1;

    t1 = takeStudentInfo();//taking input from user

    //printf("%s %s %s %s %s %s %s\n",t1.dept,t1.roll,t1.name,t1.phone,t1.email,t1.addr,t1.pass);

    int tempCheck = isDuplicateStudentAvailable(t1,NULL);//checking for duplicate student
    //printf("%d\n",tempCheck);
    if(tempCheck==2)
    {
        printf("\"%s\" IS ALREADY IN STUDNET'S LIST.\n",t1.name);
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
    }
    else if(tempCheck==1)
    {
        printf("SOMEONE IS REGISTERED WITH PHONE NUMBER \"%s\".\n",t1.phone);
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
    }
    else
    {
        //writing to file
        FILE *ptr = fopen("student_list.txt","a");
        if(ptr!=NULL)
        {
            fwrite(&t1,sizeof(t1),1,ptr);
            fclose(ptr);
            printf("\n\"%s\" ADDED AS STUDENT SUCCESSFULLY.\n",t1.name);
        }
        else puts("Something went wrong\n");
        fclose(ptr);
        //writing to file above

        printf("1.Add another\t2.Go Back\t3.Exit\nCommand:");
    }
    showExtraCommandAdmin(0);//0=add student
}


//remateTeachent = Remove/Update Teacher/Student
void remateTeachent(int isStudent,int isFromUpdate) //teacher and student; 0 = teacher, 1 = student
{
    char temp[6] = "Dept",tt[8] = "teacher";//by default
    if(isStudent)
    {
        strcpy(temp,"Roll");
        strcpy(tt,"student");
    }
    struct TEACHER t1,t2;
    struct STUDENT st1,st2;

    printf("Enter %s's Dept:",tt);
    gets(t1.dept);
    while(t1.dept[0]==0)
    {
        printf("Can't be empty. Enter dept again:");
        gets(t1.dept);
    }

    //checking for value
    int tempCheck=0;//not found
    FILE *ptr;
    if(isStudent) ptr = fopen("student_list.txt","r");
    else ptr = fopen("teacher_list.txt","r");

    char **matched=0;

    if(ptr!=NULL)
    {
        int isPrinted=0;
        if(isStudent)
        {
            while(fread(&st1,sizeof(st1),1,ptr)!=0)
            {
                if(strcmp(st1.dept,t1.dept)==0)
                {
                    if(!isPrinted)
                    {
                        printf("SHOWING ALL STUDENTS IN \"%s\" DEPARTMENT:\n\n",t1.dept);
                        printf("%*s %*s %*s %*s %*s %*s %*s %*s\n",4,"S.N.",11,"DEPARTMENT",10,"ROLL",15,"NAME",14,"PHONE",25,"EMAIL",30,"ADDRESS",15,"PASSWORD");
                        isPrinted = 1;
                    }
                    printf("%*d %*s %*s %*s %*s %*s %*s %*s\n",4,tempCheck+1,11,st1.dept,10,st1.roll,15,st1.name,14,st1.phone,25,st1.email,30,st1.addr,15,st1.pass);
                    matched = (char **) realloc(matched,(tempCheck+1)*21*sizeof(char));
                    matched[tempCheck] = calloc(21,sizeof(char));
                    strcpy(matched[tempCheck],st1.phone);
                    tempCheck++;//student found
                }
            }

        }
        else
        {
            while(fread(&t2,sizeof(t2),1,ptr)!=0)
            {
                if(strcmp(t2.dept,t1.dept)==0)
                {
                    if(!isPrinted)
                    {
                        printf("SHOWING ALL TEACHERS IN \"%s\" DEPARTMENT: \n\n",t1.dept);
                        printf("%*s %*s %*s %*s %*s %*s %*s\n",4,"S.N.",11,"DEPARTMENT",15,"NAME",14,"PHONE",25,"EMAIL",30,"ADDRESS",15,"PASSWORD");
                        isPrinted = 1;
                    }
                    printf("%*d %*s %*s %*s %*s %*s %*s\n",4,tempCheck+1,11,t2.dept,15,t2.name,14,t2.phone,25,t2.email,30,t2.addr,15,t2.pass);
                    matched = (char **) realloc(matched,(tempCheck+1)*21*sizeof(char));
                    matched[tempCheck] = calloc(21,sizeof(char));
                    strcpy(matched[tempCheck],t2.phone);
                    tempCheck++;//teacher found

                }
            }
        }
    }
    fclose(ptr);
    //checking for value above

    if(!tempCheck)
    {
        printf("NO %s found\n",tt);
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
    }
    else
    {
        printf("\n");

        //taking selected number input
        int selectedNum = getSelectedInput(tempCheck,isFromUpdate);//will return integer input from user
        //taking selected number input above

        struct STUDENT up_st;
        struct TEACHER up_t;

        if(isFromUpdate)//will take new info from user
        {
            if(isStudent) //
            {
                up_st = takeStudentInfo();
                if(strcmp(up_st.phone,matched[selectedNum-1])!=0)
                {
                    int checking = isDuplicateStudentAvailable(up_st,matched[selectedNum-1]);
                    while(checking)
                    {
                        printf("SOMEONE IS ALREADY REGISTERED WITH PHONE \"%s\". Enter info again:\n",up_st.phone);
                        up_st = takeStudentInfo();
                        if(strcmp(up_st.phone,matched[selectedNum-1])==0) break;
                    }
                }
            }
            else
            {
                up_t = takeTeacherInfo();
                if(strcmp(up_t.phone,matched[selectedNum-1])!=0)
                {
                    int checking = isDuplicateTeacherAvailable(up_t,matched[selectedNum-1]);
                    while(checking)
                    {
                        printf("SOMEONE IS ALREADY REGISTERED WITH PHONE \"%s\". Enter info again:\n",up_t.phone);
                        up_t = takeTeacherInfo();
                        if(strcmp(up_t.phone,matched[selectedNum-1])==0) break;
                    }
                }
            }
        }

        //writing to file
        FILE *ptr2,*tempPtr;
        char old[20],now[20];
        if(isStudent)
        {
            strcpy(old,"student_list.txt");
            strcpy(now,"tempst_list.txt");

            ptr2 = fopen("student_list.txt","r");
            tempPtr = fopen("tempst_list.txt","a");//temp student list

            while(fread(&st1,sizeof(st1),1,ptr2)!=0)
            {
                if(strcmp(matched[selectedNum-1],st1.phone)!=0)fwrite(&st1,sizeof(st1),1,tempPtr);
                else
                {
                    if(isFromUpdate) fwrite(&up_st,sizeof(up_st),1,tempPtr);//up_st updated student info
                }
            }
        }
        else
        {
            strcpy(old,"teacher_list.txt");
            strcpy(now,"tempt_list.txt");

            ptr2 = fopen("teacher_list.txt","r");
            tempPtr = fopen("tempt_list.txt","a");//temp teacher list
            while(fread(&t1,sizeof(t1),1,ptr2)!=0)
            {
                if(strcmp(matched[selectedNum-1],t1.phone)!=0)fwrite(&t1,sizeof(t1),1,tempPtr);
                else
                {
                    if(isFromUpdate) fwrite(&up_t,sizeof(up_t),1,tempPtr);//updated teacher info
                }
            }
        }
        fclose(ptr2);
        fclose(tempPtr);
        remove(old);
        rename(now,old);
        //writing to file above

        free(matched);
        if(isFromUpdate)
        {
            printf("\"%s\"'s INFO SUCCESSFULLY UPDATED.\n",tt);
            printf("1.Update another\t2.Go Back\t3.Exit\nCommand:");
        }
        else
        {
            printf("\"%s\" REMOVED SUCCESSFULLY.\n",tt);
            printf("1.Remove another\t2.Go Back\t3.Exit\nCommand:");
        }
    }

    //2,3,4,5 remove teacher, student, update teac,stud
    // (0,0) (1,0), (0,1), (1,1)
    int pass=5;
    if(!isStudent && !isFromUpdate) pass=2;
    else if(isStudent && !isFromUpdate) pass=3;
    else if(!isStudent && isFromUpdate) pass =4;
    showExtraCommandAdmin(pass);
}

int getSelectedInput(int num,int isFromUpdate)
{
    int tNum=num;
    int count=0;//length
    while(num)
    {
        num/=10;
        count++;
    }
    char arr[51];
    if(isFromUpdate==0) printf("Enter serial number that you want to remove:");
    else if(isFromUpdate==1) printf("Enter serial number that you want to update:");
    else if(isFromUpdate==-1) printf("Enter teacher's serial number:");
    else if(isFromUpdate==2) printf("Enter course number you want to remove:");
    else if(isFromUpdate==3) printf("Enter course number you want to add marks:");
    else
    {
        printf("Enter serial number:");
    }
    gets(arr);
    while(arr[count]!=0 || doesContainInvalid(arr) ||
            convertStringToInt(arr)<1 || convertStringToInt(arr)>tNum)
    {
        printf("Enter 1 to %d only. Enter again:",tNum);
        gets(arr);
    }
    return convertStringToInt(arr);
}

int convertStringToInt(char arr[])
{
    int n=(int)arr[0] - 48;
    int i=1;
    while(arr[i]!='\0')
    {
        n*=10;
        n+=(int)arr[i] - 48;
        i++;
    }
    return n;
}

int doesContainInvalid(char arr[])
{
    int i=0;
    while(arr[i]!=0)
    {
        if(arr[i]<48 || arr[i]>57)
        {
            return 1;//contain invalid
        }
        i++;
    }
    return 0;// does not contain invalid
}

struct STUDENT takeStudentInfo()
{
    struct STUDENT t1;
    char text[7][15]= {"Dept:","Roll:","Name:","Phone:","Email:","Address:","Password:"};
    int size[7]= {21,21,51,21,51,101,51};
    //21,21,51,21,51,101,51
    for(int i=0; i<7; i++)
    {
        printf("%s",text[i]);
        char arr[size[i]];
        gets(arr);
        while(arr[0]==0)
        {
            printf("Can't be empty. Enter %s",text[i]);
            gets(arr);
        }
        switch(i)
        {
        case 0:
            strcpy(t1.dept,arr);
            break;
        case 1:
            strcpy(t1.roll,arr);
            break;
        case 2:
            strcpy(t1.name,arr);
            break;
        case 3:
            strcpy(t1.phone,arr);
            break;
        case 4:
            strcpy(t1.email,arr);
            break;
        case 5:
            strcpy(t1.addr,arr);
            break;
        case 6:
            strcpy(t1.pass,arr);
            break;
        }

    }

    return t1;

}

int isDuplicateStudentAvailable(struct STUDENT st1,char pPhone[])//previous phone
{

    struct STUDENT st2;
    int tempCheck=0;//student not found
    FILE *ptr = fopen("student_list.txt","r");
    if(ptr!=NULL)
    {
        while(fread(&st2,sizeof(st2),1,ptr)!=0)
        {
            //printf("%20s%20s%20s%20s%20s%20s",st2.phone,st2.pass,st2.)
            //printf("%4d %11s %15s %15s %15s %25s %30s %20s\n",tempCheck+1,st2.dept,st2.roll,st2.name,st2.phone,st2.email,st2.addr,st2.pass);

            if(strcmp(st1.phone,st2.phone)==0)
            {
                tempCheck = 1;//phone number found
                if(strcmp(st2.roll,st1.roll)==0 && strcmp(st2.dept,st1.dept)==0 &&
                        strcmp(st2.name,st1.name)==0 && strcmp(st2.email,st1.email)==0 &&
                        strcmp(st2.addr,st1.addr)==0)
                {
                    tempCheck = 2;//student found
                }
                if(pPhone!=NULL) //calling from Update info
                {
                    if(strcmp(pPhone,st1.phone)==0)
                    {
                        tempCheck=0;
                        continue;
                    }
                }
                fclose(ptr);
                break;
            }
        }
    }
    //else puts("Error found");
    fclose(ptr);
    return tempCheck;
    //checking for duplicate student above
}

int isDuplicateTeacherAvailable(struct TEACHER t1,char pPhone[]) //previous phone number
{
    //checking for duplicate teacher
    int tempCheck=0;//teacher not found
    FILE *ptr = fopen("teacher_list.txt","r");
    struct TEACHER t2;
    if(ptr!=NULL)
    {
        while(!feof(ptr))
        {
            fread(&t2,sizeof(t2),1,ptr);
            if(strcmp(t1.phone,t2.phone)==0)
            {
                tempCheck = 1;//phone number found
                if(strcmp(t2.dept,t1.dept)==0 && strcmp(t2.name,t1.name)==0 && strcmp(t2.email,t1.email)==0 && strcmp(t2.addr,t1.addr)==0)
                {
                    tempCheck = 2;//teacher found
                }
                if(pPhone!=NULL) //function is called from update info
                {
                    if(strcmp(t1.phone,pPhone)==0)
                    {
                        tempCheck = 0;
                        continue;
                    }
                }
                break;
            }
        }
    }
    fclose(ptr);
    return tempCheck;
    //checking for duplicate teacher above
}

void showExtraCommandAdmin(int checker)
{
    //checker 0=addStudent,1=addTeacher,2=removeStudent,3=removeTeacher,4=updateStudent,5=updateTeacher
    //6 = asset course
    char ch = getValidInput();
    if(ch=='1')
    {
        switch(checker)
        {
        case 0:
            system("cls");
            printf("\t<== ADD STUDENT ==>\n");
            addStudent();
            break;
        case 1:
            printf("\t<== ADD TEACHER ==>\n");
            system("cls");
            addTeacher();
            break;
        case 2:
            system("cls");
            printf("\t<== REMOVE TEACHER ==>\n");
            remateTeachent(0,0);//remove teacher
            break;
        case 3:
            system("cls");
            printf("\t<== REMOVE STUDENT ==>\n");
            remateTeachent(1,0);//remove student
            break;
        case 4:
            system("cls");
            printf("\t<== UPDATE TEACHER ==>\n");
            remateTeachent(0,1);//update teacher
            break;
        case 5:
            system("cls");
            printf("\t<== UPDATE STUDENT ==>\n");
            remateTeachent(1,1);//update student
            break;
        case 6:
            system("cls");
            printf("\t<== COURSE ASSIGN ==>\n");
            assateCourse(0);//assign course
            break;
        case 7:
            system("cls");
            printf("\t<== UPDATE COURSE ==>\n");
            assateCourse(1);//update course
            break;
        }

    }
    else if(ch=='2')
    {
        system("cls");
        handleAdminPanel();
    }
    else if(ch=='3')
    {
        system("cls");
        printf("Program closed.\n");
        exit(0);
    }
    else
    {
        system("cls");
        printf("Something went wrong. Going back to Admin panel\n");
        handleAdminPanel();
    }
}

void showExtraCommandTeacher(int checker)
{// 0=add CT, 1=update CT, 2=findRoll, 3=findName, 4=total students
    char ch = getValidInput();
    if(ch=='1')
    {
        switch(checker)
        {
        case 0:
            system("cls");
            printf("\t<== ADD CT MARKS ==>\n");
            addCTMarks(0);//0 = addCtMarks
            break;
        case 1:
            system("cls");
            printf("\t<== UPDATE CT MARKS ==>\n");
            addCTMarks(1); // 1 = update ct marks
            break;
        case 2:
        {
            system("cls");
            printf("\t<== SEARCH BY ROLL ==>\n");
            char arr[51];
            printf("Enter student's roll:");
            gets(arr);
            while(arr[0]==0)
            {
                printf("Can't be empty. Enter roll:");
                gets(arr);
            }
            searchByRoll(arr);
        }
        break;
        case 3:
            system("cls");
            printf("\t<== SEARCH BY NAME ==>\n");
            searchByName();
            break;
        case 4:
            system("cls");
            printf("\t<== SHOW TOTAL STUDENT ==>\n");
            showTotalStudents();
            break;
        }

    }
    else if(ch=='2')
    {
        system("cls");
        handleTeacherPanel();
    }
    else if(ch=='3')
    {
        system("cls");
        printf("Program closed.\n");
        exit(0);
    }
    else
    {
        printf("Something went wrong. Going back to Teacher's panel\n");
        handleTeacherPanel();
    }

}

void showExtraCommandStudent(int checker)
{// 0=enRoll course, 1= Remove course, 2 = show CT marks // remove = update
    char ch = getValidInput();
    system("cls");
    if(ch=='1')
    {
        switch(checker)
        {
        case 0:
            printf("\t<== ENROLL COURSE ==>\n");
            remRoll(0);
            break;
        case 1:
            printf("\t<== REMOVE COURSE ==>\n");
            remRoll(1);
            break;
        case 2:
            printf("Working on it.\n");
            break;
        default:
        {
            printf("Something went wrong.\n Going back to Student's panel.\n");
            handleStudentPanel();
            break;
        }
        }

    }
    else if(ch=='2')
    {
        handleStudentPanel();
    }
    else if(ch=='3')
    {
        printf("Program closed.\n");
        exit(0);
    }
    else
    {
        printf("Something went wrong. Going back to Student's panel\n");
        handleStudentPanel();
    }
}

struct TEACHER takeTeacherInfo()
{
    struct TEACHER t1;
    char text[6][10]= {"Dept:","Name:","Phone:","Email:","Address:","Password:"};

    int size[]= {21,51,21,51,101,51};
    for(int i=0; i<6; i++)
    {
        printf("%s",text[i]);
        char arr[size[i]];
        gets(arr);
        while(arr[0]==0)
        {
            printf("Can't be empty. Enter %s",text[i]);
            gets(arr);
        }
        switch(i)
        {
        case 0:
            strcpy(t1.dept,arr);
            break;
        case 1:
            strcpy(t1.name,arr);
            break;
        case 2:
            strcpy(t1.phone,arr);
            break;
        case 3:
            strcpy(t1.email,arr);
            break;
        case 4:
            strcpy(t1.addr,arr);
            break;
        case 5:
            strcpy(t1.pass,arr);
            break;
        }
    }
    return t1;
}


void searchByRoll(char *arr)
{
    FILE *ptr = fopen("student_list.txt","r");
    struct STUDENT st1;
    int tempCheck=0,isPrinted=0;;
    if(ptr!=NULL)
    {
        while(fread(&st1,sizeof(st1),1,ptr)!=0)
        {
            if(strcmp(st1.roll,arr)==0)
            {
                if(!isPrinted)
                {
                    printf("SHOWING ALL STUDENTS BEARING ROLL \"%s\":\n\n",arr);
                    printf("%*s %*s %*s %*s %*s %*s %*s\n",3,"SN.",11,"DEPARTMENT",10,"ROLL",15,"NAME",14,"PHONE",25,"EMAIL",30,"ADDRESS");
                    isPrinted = 1;
                }
                printf("%*d %*s %*s %*s %*s %*s %*s\n",3,tempCheck+1,11,st1.dept,10,st1.roll,15,st1.name,14,st1.phone,25,st1.email,30,st1.addr);
                tempCheck++;//student found
            }
        }
    }
    fclose(ptr);
    if(!tempCheck)
    {
        printf("NO STUDENT FOUND BEARING ROLL \"%s\".\n",arr);
    }
    printf("\n1.Search again\t2.Go Back\t3.Exit\nCommand:");
    showExtraCommandTeacher(2);
}

void searchByName()
{
    char arr[51];
    printf("Enter student's name:");
    gets(arr);
    while(arr[0]==0)
    {
        printf("Can't be empty. Enter name:");
        gets(arr);
    }

    struct STUDENT st1;
    FILE *ptr = fopen("student_list.txt","r");
    int isPrinted=0,tempCheck=0;

    if(ptr!=NULL)
    {
        while(fread(&st1,sizeof(st1),1,ptr)!=0)
        {
            if(strcmp(st1.name,arr)==0)
            {
                if(!isPrinted)
                {
                    printf("SHOWING ALL STUDENTS WITH NAME \"%s\":\n\n",arr);
                    printf("%*s %*s %*s %*s %*s %*s %*s\n",3,"SN.",11,"DEPARTMENT",10,"ROLL",15,"NAME",14,"PHONE",25,"EMAIL",30,"ADDRESS");
                    isPrinted = 1;
                }
                printf("%*d %*s %*s %*s %*s %*s %*s\n",3,tempCheck+1,11,st1.dept,10,st1.roll,15,st1.name,14,st1.phone,25,st1.email,30,st1.addr);
                tempCheck++;//student found
            }
        }
    }
    fclose(ptr);

    if(!tempCheck)
    {
        printf("NO STUDENT FOUND WITH NAME \"%s\".\n",arr);
    }
    Sleep(250);
    printf("\n1.Search again\t2.Go Back\t3.Exit\nCommand:");
    showExtraCommandTeacher(3);
}
//system("cls")





void assateCourse(int isFromUpdate) //assign + update courses
{
    struct TEACHER t2;

    char dep[21];

    printf("Enter teacher's Dept:");
    gets(dep);
    while(dep[0]==0)
    {
        printf("Can't be empty. Enter dept. again:");
        gets(dep);
    }

    //checking for value
    int tempCheck=0;//not found
    FILE *ptr = fopen("teacher_list.txt","r");

    char **matched=0;

    if(ptr!=NULL)
    {
        int isPrinted=0;

        while(fread(&t2,sizeof(t2),1,ptr)!=0)
        {
            if(strcmp(t2.dept,dep)==0)
            {
                if(!isPrinted)
                {
                    printf("SHOWING ALL TEACHERS IN \"%s\" DEPARTMENT:\n\n",dep);
                    printf("%*s %*s %*s %*s %*s %*s\n",4,"S.N.",11,"DEPARTMENT",15,"NAME",14,"PHONE",25,"EMAIL",30,"ADDRESS");
                    isPrinted = 1;
                }
                printf("%*d %*s %*s %*s %*s %*s\n",4,tempCheck+1,11,t2.dept,15,t2.name,14,t2.phone,25,t2.email,30,t2.addr);
                matched = (char **) realloc(matched,(tempCheck+1)*21*sizeof(char));
                matched[tempCheck] = calloc(21,sizeof(char));
                strcpy(matched[tempCheck],t2.phone);
                tempCheck++;//teacher found

            }
        }

    }
    fclose(ptr);
    //checking for value above

    if(!tempCheck)
    {
        printf("NO TEACHER FOUND.\n");
        printf("1.Try again\t2.Go Back\t3.Exit\nCommand:");
        showExtraCommandAdmin(6+(isFromUpdate==1));
    }
    else
    {
        printf("\n");

        //taking selected number input
        int selectedNum = getSelectedInput(tempCheck,-1);
        //taking selected number input above

        //will show teacher's name and assigned courses
        showAssignedCourses(matched[selectedNum-1],isFromUpdate);

        free(matched);
        if(isFromUpdate) printf("1.Update course again\t2.Go Back\t3.Exit\nCommand:");
        else printf("1.Assign course again\t2.Go Back\t3.Exit\nCommand:");
        showExtraCommandAdmin(6+(isFromUpdate==1));
    }
}

void showAssignedCourses(char *phone,int isFromUpdate)
{
    struct TEACHER t1;
    FILE *ptr = fopen("teacher_list.txt","r");

    if(ptr!=NULL)
    {
        while(fread(&t1,sizeof(t1),1,ptr)!=0)
        {
            if(strcmp(t1.phone,phone)==0)
            {
                printf("\"%s\", DEPARTMENT OF \"%s\"\n",t1.name,t1.dept);
                break;
            }
        }
        fclose(ptr);
        //showing teacher's name and dept above

        struct cFormat //course format
        {
            char phone[21],cc[20];//cc = course code
        } cf1;
        FILE *ptr2 = fopen("course_assign.txt","r");
        int total_course=0;
        char **matched=0;
        if(ptr!=NULL)
        {
            while(fread(&cf1,sizeof(cf1),1,ptr2)!=0)
            {
                if(strcmp(cf1.phone,phone)==0)
                {
                    total_course++;
                    matched = (char **) realloc(matched,(total_course)*sizeof(cf1.cc));
                    matched[total_course-1] = calloc(20,sizeof(char));

                    strcpy(matched[total_course-1],cf1.cc);
                    if(isFromUpdate) //show serially
                    {
                        if(!(total_course-1)) printf("ASSIGNED COURSES:\n");
                        printf("%3d. %s\t",total_course,cf1.cc);
                        if(total_course%2==0) printf("\n");
                    }
                    else
                    {
                        if(!(total_course-1)) printf("ASSIGNED COURSES: \"%s\"",cf1.cc);
                        else printf(", \"%s\"",cf1.cc);
                    }
                }
            }
            if(total_course%2==1 || (!isFromUpdate && total_course))printf("\n");
            if(total_course==0) printf("NO COURSE ASSIGNED.\n");
        }
        else
        {
            printf("NO COURSE ASSIGNED.\n");
        }
        fclose(ptr2);
        //todo error occurring here

        //while ((getchar()) != '\n'); for clearing buffer

        int selectedNum;
        if(isFromUpdate)
        {
            if(total_course)
            {
                selectedNum = getSelectedInput(total_course,1);
                printf("New course code:(LEAVE \"BLANK\" FOR REMOVING):");
            }
            else
            {
                printf("NOTHING TO DO HERE.\n");
                return;
            }
        }
        else
        {
            printf("Enter course code you want to assign:");
        }
        //taking class code from user

        char arr[21];
        gets(arr);
        while(arr[0]==0 && !isFromUpdate)
        {
            printf("Can't be empty. Enter again:");
            gets(arr);
        }
        //taking class code from user above

        if(!isFromUpdate)//function is called from assign course
        {
            if(isCCAlreadyAssigned(phone,arr))//phone, class_code
            {
                //checking if course is already assigned or not
                printf("\"%s\" IS ALREADY ASSIGNED TO THIS TEACHER.\n",arr);
            }
            else
            {
                FILE *ccw = fopen("course_assign.txt","a");
                struct cFormat //course format
                {
                    char phone[21],cc[20];//cc = course code
                } cf1;
                strcpy(cf1.phone,phone);
                strcpy(cf1.cc,arr);
                fwrite(&cf1,sizeof(cf1),1,ccw);
                fclose(ccw);
                printf("COURSE ASSIGNMENT COMPLETED.\n");
            }
        }
        else //function is called from update course
        {
            FILE *ptr = fopen("course_assign.txt","r+");

            struct cFormat //course format
            {
                char phone[21],cc[20];//cc = course code
            } cf1,cf2;
            if(arr[0]==0) //remove course code
            {
                if(ptr!=NULL)
                {
                    FILE *temp = fopen("temp_assign.txt","a");
                    while(fread(&cf1,sizeof(cf1),1,ptr)!=0)
                    {
                        if(strcmp(cf1.phone,phone)!=0 || strcmp(cf1.cc,matched[selectedNum-1])!=0)
                        {
                            fwrite(&cf1,sizeof(cf1),1,temp);
                        }
                    }
                    fclose(ptr);
                    fclose(temp);
                    remove("course_assign.txt");
                    rename("temp_assign.txt","course_assign.txt");
                    printf("COURSE SUCCESSFULLY REMOVED.\n");
                }
                else
                {
                    printf("Something went wrong.\n");
                }
            }
            else //modify class code
            {
                if(ptr!=NULL)
                {
                    if(strcmp(matched[selectedNum-1],arr)!=0 && isCCAlreadyAssigned(phone,arr))
                    {
                        printf("\"%s\" IS ALREADY ASSIGNED TO THIS TEACHER.\n",arr);
                    }
                    else
                    {
                        while(fread(&cf1,sizeof(cf1),1,ptr)!=0)
                        {
                            if(strcmp(cf1.phone,phone)==0 && strcmp(cf1.cc,matched[selectedNum-1])==0)
                            {
                                fseek(ptr,-(long)sizeof(cf1),SEEK_CUR);
                                strcpy(cf2.phone,cf1.phone);
                                strcpy(cf2.cc,arr);
                                fwrite(&cf2,sizeof(cf2),1,ptr);
                                fseek(ptr,0,SEEK_CUR);
                                fclose(ptr);
                                break;
                            }
                        }
                        printf("COURSE SUCCESSFULLY UPDATED.\n");
                    }
                }
                else
                {
                    printf("Something went wrong\n");
                }
                fclose(ptr);
            }
        }

        if(isFromUpdate)printf("1.Update again\t2.Go Back\t3.Exit\nCommand:");
        else printf("1.Assign again\t2.Go Back\t3.Exit\nCommand:");

        showExtraCommandAdmin(6+(isFromUpdate==1));
    }


    else
    {
        printf("Something went wrong. Going back to teacher's panel\n");
        handleTeacherPanel();
    }
}

int isCCAlreadyAssigned(char *phone,char *cc)
{
    struct cFormat //course format
    {
        char phone[21],cc[20];//cc = course code
    } cf1;

    FILE *ptr = fopen("course_assign.txt","r");
    int checker=0;//course not assigned
    if(ptr!=NULL)
    {
        while(fread(&cf1,sizeof(cf1),1,ptr)!=0)
        {
            if(strcmp(cf1.phone,phone)==0 && strcmp(cf1.cc,cc)==0)
            {
                fclose(ptr);
                checker=1;
                break;//course already assigned
            }
        }
    }
    fclose(ptr);
    return checker;
}



//Remove+Enroll = remroll
void remRoll(int isFromUpdate) //take input is optional
{
    FILE *ptr = fopen("student_course.txt","r");
    struct STC_FORMAT stc;
    int counter=0;
    char **matched=0;
    if(ptr!=NULL)
    {
        while(fread(&stc,sizeof(stc),1,ptr)!=0)
        {
            if(strcmp(stc.phone,STUDENT_PHONE)==0)
            {
                if(!counter)
                {
                    printf("ENROLLED COURSES:");
                    if(isFromUpdate) printf("\n");
                }
                if(isFromUpdate)
                {

                    matched = realloc(matched,(counter+1)*sizeof(stc.cc));
                    matched[counter] = calloc(20,sizeof(char));
                    strcpy(matched[counter],stc.cc);

                    printf("%d)%s\t",counter+1,stc.cc);
                    if(counter%3==2) printf("\n");
                }
                else
                {
                    if(counter) printf(", ");
                    printf("\"%s\"",stc.cc);
                }
                counter++;
            }
        }
        fclose(ptr);
    }
    else fclose(ptr);


    if(isFromUpdate)
    {
        if(counter%3!=0) printf("\n");
    }
    else printf("\n");

    if(isFromUpdate)//remove part
    {
        if(counter)
        {
            int val = getSelectedInput(counter,2);
            FILE *ptr2 = fopen("student_course.txt","r");
            FILE *temp = fopen("temp_course.txt","a");
            struct STC_FORMAT cs;
            while(fread(&cs,sizeof(cs),1,ptr2)!=0)
            {
                if(strcmp(cs.cc,matched[val-1])!=0 || strcmp(cs.phone,STUDENT_PHONE)!=0)
                {
                    fwrite(&cs,sizeof(cs),1,temp);
                }
            }
            fclose(ptr2);
            fclose(temp);
            remove("student_course.txt");
            rename("temp_course.txt","student_course.txt");
            printf("\"%s\" REMOVED SUCCESSFULLY.\n",matched[val-1]);
            printf("1.Remove another \t2.Go Back \t3.Exit\nCommand:");
            showExtraCommandStudent(1);
        }
        else
        {
            printf("OOPS!!!. YOU HAVEN'T ENROLLED ANY COURSE. GOING BACK TO STUDENT PANEL.\n");
            handleStudentPanel();
        }

    }
    else
    {
        char cc[20];
        printf("Enter course code you want to enroll:");
        gets(cc);
        while(cc[0]==0)
        {
            printf("Can't be empty. Enter again:");
            gets(cc);
        }
        if(isCCAssignedToTeacher(cc))
        {
            FILE *ptr2 = fopen("student_course.txt","r");
            struct STC_FORMAT st;
            int isPrinted=0;
            if(ptr2!=NULL)
            {
                while(fread(&st,sizeof(st),1,ptr2)!=0)
                {
                    if(strcmp(st.phone,STUDENT_PHONE)==0 && strcmp(st.cc,cc)==0)
                    {
                        isPrinted=1;
                        break;
                    }
                }
            }
            fclose(ptr2);
            if(isPrinted)
            {
                printf("YOU HAVE ALREADY ENROLLED THIS COURSE.\n");
                printf("1.Enroll another \t2.Go Back \t3.Exit\nCommand:");
            }
            else
            {
                ptr2 = fopen("student_course.txt","a");


                struct STUDENT sr;

                //get student roll
                FILE *src = fopen("student_list.txt","r");
                while(fread(&sr,sizeof(sr),1,src)!=0)
                {
                    if(strcmp(sr.phone,STUDENT_PHONE)==0)
                    {
                        strcpy(st.dept,sr.dept);
                        strcpy(st.name,sr.name);
                        strcpy(st.roll,sr.roll);
                        fclose(src);
                        break;
                    }
                }
                fclose(src);//not needed
                //get student roll above

                strcpy(st.phone,STUDENT_PHONE);
                strcpy(st.cc,cc);
                if(ptr2!=NULL)
                {
                    fwrite(&st,sizeof(st),1,ptr2);
                    printf("COURSE ENROLLED COMPLETED.\n");
                    printf("1.Enroll another \t2.Go Back \t3.Exit\nCommand:");
                }
                else
                {
                    printf("Something went wrong.\n");
                    printf("1.Try again \t2.Go Back \t3.Exit\nCommand:");
                }
                fclose(ptr2);
            }


        }
        else
        {
            printf("\"%s\" IS NOT ASSIGNED TO ANY TEACHER TILL NOW.\n",cc);
            printf("1.Try again \t2.Go Back \t3.Exit\nCommand:");
        }
        showExtraCommandStudent(0);
    }
}

int isCCAssignedToTeacher(char cc[21])
{
    struct cFormat //course format
    {
        char phone[21],cc[20];//cc = course code
    } cf1;
    int isAssign=0;//false
    FILE *ptr = fopen("course_assign.txt","r");

    if(ptr!=NULL)
    {
        while(fread(&cf1,sizeof(cf1),1,ptr)!=0)
        {
            if(strcmp(cf1.cc,cc)==0)
            {
                isAssign = 1;
                break;
            }
        }
    }
    fclose(ptr);
    return isAssign;

}


void addCTMarks(int isFromUpdate)//not completed yet
{
    FILE *ptr = fopen("course_assign.txt","r");
    if(ptr!=NULL)
    {
        struct cFormat //course format
        {
            char phone[21],cc[20];//cc = course code
        } cf1;

        int total_course=0;
        char **matched=0;
        while(fread(&cf1,sizeof(cf1),1,ptr)!=0)
        {
            if(strcmp(cf1.phone,TEACHER_PHONE)==0)
            {
                total_course++;
                matched = (char **) realloc(matched,(total_course)*sizeof(cf1.cc));
                matched[total_course-1] = calloc(20,sizeof(char));
                strcpy(matched[total_course-1],cf1.cc);
                if(!(total_course-1)) printf("ASSIGNED COURSES:\n");
                printf("%3d. %s\t",total_course,cf1.cc);
                if(total_course%2==0) printf("\n");
            }
        }
        fclose(ptr);

        if(total_course%2==1)printf("\n");
        if(total_course==0)
        {
            free(matched);
            printf("YOU ARE NOT ASSIGNED TO ANY COURSES. GOING BACK TO TEACHERS'S PANEL.\n");
            handleTeacherPanel();
            return;
        }
        else
        {
            int selectedNum = getSelectedInput(total_course,3);
            char cc[20];//class_code
            strcpy(cc,matched[selectedNum-1]);
            free(matched);

            char dep[21];
            printf("Enter department:");
            gets(dep);
            while(dep[0]==0)
            {
                printf("Can't be empty. Enter dept::");
                gets(dep);
            }

            int total = getTotalStudent(cc,dep,isFromUpdate);

            if(!total)
            {
                if(isFromUpdate) printf("YOU HAVEN'T ADD CT MARKS TO THIS(\"%s\") COURSE.\n",cc);
                else printf("NO ONE FROM \"%s\" DEPARTMENT HAS ENROLLED THIS COURSE YET.\n",dep);
                printf("GOING BACK TO TEACHER'S PANEL.\n");
                handleTeacherPanel();
                return;
            }
            else
            {
                char repl[7] = "add";
                if(isFromUpdate) strcpy(repl,"update");
                printf("Total %d students have enrolled this course. Are you sure you want to %s CT marks?\n",total,repl);
                printf("1) YES\t2) NO\nCommand:");

                //
                char cmd[51];
                gets(cmd);
                while(cmd[0]<49 || cmd[0]>50 || cmd[1]!=0)
                {
                    printf("Please type 1 or 2 only\nCommand:");
                    gets(cmd);
                }

                if(cmd[0]=='1')
                {
                    printf("LEAVE \"BLANK\" FOR ABSENT.\n");
                    if(isFromUpdate)
                    {
                        printf("%20s%20s%20s%20s%20s\n","ROLL","NAME","DEPARTMENT","PRE. RESULT","ENTER NEW MARKS");
                        struct MARKS_FORMAT mfr;
                        FILE *ptr_up = fopen("ct_marks.txt","r+");
                        if(ptr_up!=NULL)
                        {
                            while(fread(&mfr,sizeof(mfr),1,ptr_up)!=0)
                            {
                                if(strcmp(mfr.cc,cc)==0 && strcmp(mfr.dept,dep)==0)
                                {
                                    char ignored[10]=" ";
                                    printf("%20s%20s%20s%20s%15s",mfr.roll,mfr.name,mfr.dept,mfr.marks,ignored);
                                    char num[21];
                                    gets(num);
                                    if(num[0]==0) strcpy(num,"Absent");


                                    FILE *ptr_tmpr = ptr_up;
                                    fseek(ptr_up,-(long)sizeof(mfr),SEEK_CUR);
                                    strcpy(mfr.marks,num);
                                    fwrite(&mfr,sizeof(mfr),1,ptr_up);
                                    fseek(ptr_up,0,SEEK_CUR);
                                }
                            }
                            fclose(ptr_up);
                            printf("MARKS SUCCESSFULLY UPPDATED. GOING BACK TO TEACHER'S PANEL. PLEASE WAIT");
                            Sleep(400);
                            printf(".");
                            Sleep(500);
                            printf(".");
                            Sleep(600);
                            printf(".\n");
                            Sleep(700);
                            system("cls");
                        }
                        else
                        {
                            printf("Something went wrong. Going back to teacher's panel.\n");
                        }
                        handleTeacherPanel();
                    }
                    else
                    {
                        printf("%20s%20s%20s%20s\n","ROLL","NAME","DEPARTMENT","ENTER MARKS");
                        struct STC_FORMAT stc;
                        FILE *ptr_ad = fopen("student_course.txt","r");
                        if(ptr_ad!=NULL)
                        {
                            while(fread(&stc,sizeof(stc),1,ptr_ad)!=0)
                            {
                                if(strcmp(stc.cc,cc)==0 && strcmp(stc.dept,dep)==0)
                                {
                                    char ignored[10]=" ";
                                    printf("%20s%20s%20s%15s",stc.roll,stc.name,stc.dept,ignored);
                                    char num[21];
                                    gets(num);

                                    if(num[0]==0) strcpy(num,"Absent");

                                    if(!isMarkAdded(stc.phone,cc,num))
                                    {
                                        struct MARKS_FORMAT mf1;
                                        //phone[21],cc[20],roll[21],name[51],dept[21],marks[21];
                                        strcpy(mf1.phone,stc.phone);
                                        strcpy(mf1.cc,stc.cc);
                                        strcpy(mf1.marks,num);
                                        strcpy(mf1.roll,stc.roll);
                                        strcpy(mf1.name,stc.name);
                                        strcpy(mf1.dept,stc.dept);

                                        FILE *ct_ptr = fopen("ct_marks.txt","a");
                                        fwrite(&mf1,sizeof(mf1),1,ct_ptr);
                                        fclose(ct_ptr);
                                    }
                                }
                            }

                            fclose(ptr_ad);
                            printf("MARKS SUCCESSFULLY ADDED. GOING BACK TO TEACHER'S PANEL. PLEASE WAIT");
                            Sleep(400);
                            printf(".");
                            Sleep(500);
                            printf(".");
                            Sleep(500);
                            printf(".\n");
                            Sleep(600);
                            system("cls");
                        }
                        else{
                            printf("Something went wrong. Going back to teacher's panel.\n");
                        }
                        handleTeacherPanel();
                        return;
                    }
                }
                else if(cmd[0]=='2')
                {
                    printf("MARKS ADDING PROCESS CANCELED. GOING BACK TO TEACHER'S PANEL. PLEASE WAIT");
                    Sleep(300);
                    printf(".");
                    Sleep(300);
                    printf(".");
                    Sleep(450);
                    printf(".\n");
                    Sleep(500);
                    system("cls");
                    handleTeacherPanel();
                    return;
                }
                else
                {
                    printf("Something went wrong. Going back to Teacher's panel.\n");
                    handleTeacherPanel();
                    return;
                }
                //
            }
        }
    }
    else
    {
        fclose(ptr);
        printf("YOU ARE NOT ASSIGNED TO ANY COURSE. GOING BACK TO TEACHER'S PANEL.\n");
        handleTeacherPanel();
        return;
    }
}

int getTotalStudent(char cc[20],char dep[21],int isFromUpdate)
{
    if(!isFromUpdate)
    {

        FILE *ptr = fopen("student_course.txt","r");
        struct STC_FORMAT stc;
        int counter=0;
        if(ptr!=NULL)
        {
            while(fread(&stc,sizeof(stc),1,ptr)!=0)
            {
                if(strcmp(stc.cc,cc)==0 && strcmp(stc.dept,dep)==0)counter++;
            }
            fclose(ptr);
        }
        return counter;
    }
    else
    {
        FILE *ptr_tmp = fopen("ct_marks.txt","r");
        struct MARKS_FORMAT stc;
        int counter=0;
        if(ptr_tmp!=NULL)
        {
            while(fread(&stc,sizeof(stc),1,ptr_tmp)!=0)
            {
                if(strcmp(stc.cc,cc)==0 && strcmp(stc.dept,dep)==0)counter++;
            }
            fclose(ptr_tmp);
        }
        return counter;
    }
}

int isMarkAdded(char phone[21],char cc[20],char marks[21])
{
    FILE *fpt = fopen("ct_marks.txt","r+");

    struct MARKS_FORMAT mft;

    int checker=0;
    //phone[21],cc[20],marks[21],roll[21],name[51],dept[21];
    if(fpt!=NULL)
    {
        while(fread(&mft,sizeof(mft),1,fpt)!=0)
        {
            //printf("%s %s %s %s %s %s\n",mft.phone,mft.cc,mft.marks,mft.roll,mft.name,mft.dept);
            if(strcmp(mft.phone,phone)==0 && strcmp(mft.cc,cc)==0)
            {
                fseek(fpt,-(long)sizeof(mft),SEEK_CUR);

                strcpy(mft.marks,marks);
                fwrite(&mft,sizeof(mft),1,fpt);
                fseek(fpt,0,SEEK_CUR);
                fclose(fpt);
                checker=1;
                break;
            }
        }
        fclose(fpt);
        return checker;
    }
    else fclose(fpt);

    return 0;
}

void showTotalStudents()
{
    FILE *fst = fopen("student_list.txt","r");//fst = file show total
    char **matched = 0;
    int *arr = calloc(1,sizeof(int));
    int size=0;
    struct STUDENT st3;
    if(fst!=NULL)
    {
        while(fread(&st3,sizeof(st3),1,fst)!=0)
        {
            //printf("name -%s %s-\n",st3.name,st3.dept);
            int checker=-1;
            for(int i=0; i<size; i++)
            {
                if(strcmp(matched[i],st3.dept)==0)
                {
                    checker=i;
                    break;
                }
            }
            if(checker==-1)
            {
                matched = (char **)realloc(matched,(size+1)*21*sizeof(char));
                matched[size] = calloc(21,sizeof(char));
                arr = (int *)realloc(arr,(size+1)*sizeof(int));
                strcpy(matched[size],st3.dept);
                arr[size]=1;
                size++;
            }
            else arr[checker]++;
        }
    }
    fclose(fst);
    if(size==0) printf("NO STUDNET FOUND.\n");
    else
    {
        printf("%15s%15s\n","DEPARTMENT","TOTAL");
        for(int i=0; i<size; i++)
        {
            printf("%15s%15d\n",matched[i],arr[i]);
        }
    }
    free(matched);
    free(arr);
    printf("1. Go Back\t2.Exit\nCommand:");
    char inp[51];
    gets(inp);
    while(inp[0]==0 || inp[1]!=0 || inp[0]<49 || inp[0]>50)
    {
        if(inp[0]==0) printf("Can't be empty. Enter Command:");
        else printf("Invalid Command. Enter Command:");
        gets(inp);
    }
    if(inp[0]=='1')
    {
        system("cls");
        handleTeacherPanel();
    }
    else if(inp[0]=='2')
    {
        system("cls");
        printf("Program closed successfully.\n");
        exit(1);
    }
    else
    {
        printf("Something went wrong. Going back to student panel.\n");
        handleTeacherPanel();
    }
}
