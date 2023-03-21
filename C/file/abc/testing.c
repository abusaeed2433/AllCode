#include<stdio.h>
#include<string.h>
int main(){

//    FILE *ptr = fopen("input.txt","r");
//    FILE *ptr2 = fopen("output.txt","a+");
//    char str[50];
//    int t;
//    fscanf(ptr,"%d\n",&t);
//    printf("%d\n",t);
//    fprintf(ptr2,"%d\n",t);
//    while(t--){
//        fgets(str,50,ptr);
//        fprintf(ptr2,"%s",str);
//    }

    FILE *ptr = fopen("input.txt","r");
    FILE *ptr2 = fopen("output.txt","a+");
    int t;
    fscanf(ptr,"%d\n",&t);
    printf("%d\n",t);
    char str[100];
    fprintf(ptr2,"%d\n",t);

    while(t){
        t--;
        fgets(str,50,ptr);
//        fscanf(ptr,"%s",str);
        fprintf(ptr2,"%s",str);
//        fprintf(ptr2,"%s","value");
//        int n;
//        fscanf(ptr,"%d",&n);
//        printf("%d\n",n);
//        int arr[n];
//        for(int i=0;i<n;i++) fscanf(ptr,"%d",&arr[i]);
//        for(int i=0;i<n;i++) printf("%d ",arr[i]);
//        printf("\n");
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
