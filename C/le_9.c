
#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char ISSN_number[51];
        char name[50];
        int copy;
    };

    int n;
    printf("Enter number of book = ");
    scanf("%d",&n);
    struct book b[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter ISSN number of book-%d = ",i+1);
        scanf("%s",&b[i].ISSN_number);
        printf("Enter name of book-%d = ",i+1);
        scanf("%s",&b[i].name);
        printf("Enter number of copy of book-%d = ",i+1);
        scanf("%d",&b[i].copy);
        printf("\n");
    }

    char search[101];
    while(1)
    {
        printf("Enter ISSN number of book you want to search = ");
        scanf("%s",search);
        int isFound=0;
        for(int i=0; i<n; i++)
        {
            if(strcmp(b[i].ISSN_number,search)==0)
            {
                if(!isFound) printf("The book exists\n");
                isFound = 1;
                printf("Name: %s\nISSN_number: %s\nCopy: %d\n\n",b[i].name,b[i].ISSN_number,b[i].copy);
            }
        }
        if(!isFound)printf("The book doesnot exist\n\n");


        int br=0;
        while(1)
        {
            char ch[5];
            printf("Do you want to search again?\ny - YES\nn - NO\n");
            scanf("%s",ch);
            if(ch[0]=='n'||ch[0]=='N')
            {
                printf("Program exited\n");
                br=1;
                break;
            }
            else if(ch[0]=='y'||ch[0]=='Y')
            {
                break;
            }
            else
            {
                printf("Invalid character\n");
            }
        }
        if(br)
        {
            break;
        }


    }


    return 0;
}

