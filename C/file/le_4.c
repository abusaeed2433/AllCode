#include<stdio.h>
#include<stdlib.h>

void sortAndSave(int[],int);

int main(){
    FILE *ptr = fopen("input.txt","r");
    if(ptr==NULL)printf("No such file found\n");
    else{
        int *arr,count=0,n;
        arr = calloc(1,sizeof(ptr));
        fscanf(ptr,"%d",&n);
        *(arr + count) = n;
        count++;
        while(!feof(ptr)){
            fscanf(ptr,"%d",&n);
            *(arr+count) = n;
            count++;
        }
        printf("Data from file = ");
        for(int i=0;i<count;i++)printf("%d ",arr[i]);
        printf("\n");
        fclose(ptr);
        sortAndSave(arr,count);
    }
    return 0;
}
void sortAndSave(int arr[],int n){
    FILE *ptr = fopen("save.txt","w");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
            }
        }
    }
    printf("Sorted data = ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    for(int i=0;i<n;i++) fprintf(ptr, "%d\n",arr[i]);
    fclose(ptr);
    printf("\nSorted data saved in 'save.txt' file\n");
}
