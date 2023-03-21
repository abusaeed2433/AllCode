#include<stdio.h>
#include<string.h>
int main(){
    union path{
        char bs[50];
        int ignore;
    };
    typedef struct{
        char name[50];
        double height;
        int gender;
        union path s;
    }person;
    int n;
    printf("Total person = ");
    scanf("%d",&n);
    person p[n];
    for(int i=0;i<n;i++){
        printf("Enter name of person-%d = ",i+1);
        scanf("%s",p[i].name);
//        gets(p[i].name);
        printf("Enter height of person-%d = ",i+1);
        scanf("%lf",&p[i].height);
        printf("Enter gender[Male(1) Female[2]] of person-%d = ",i+1);
        scanf("%d",&p[i].gender);
        while(p[i].gender!=1 && p[i].gender!=2){
            printf("Enter gender[Male(1) Female[2]] of person-%d = ",i+1);
            scanf("%d",&p[i].gender);
        }
        if(p[i].gender==1){
            printf("Enter size of MALE person-%d = ",i+1);
            scanf("%d",&p[i].s.ignore);
        }
        else{
            printf("Enter NickName for FEMALE person-%d = ",i+1);
            scanf("%s",p[i].s.bs);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("Details for person-1\n");
        printf("Name    = %s\n",p[i].name);
        printf("Height  = %lf\n",p[i].height);
        char gen[7];
        strcpy(gen,p[i].gender==1 ? "Male" : "Female");
        printf("Gender  = %s\n",gen);
        char gen2[50];
        strcpy(gen2,"Male");
        strcmp(gen2,gen)==0 ? printf("Ignored = %d\n",p[i].s.ignore): printf("N Name   = %s\n",p[i].s.bs);
        printf("\n");
    }
    return 0;
}
