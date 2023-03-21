#include <stdio.h>
//
//int main(){
//
//    int* A[3][3][3];
//    int *x = A[0][0][0];
//    int arr[3][3] = {
//        {1,2,3},
//        {4,5,6},
//        {7,8,9}
//    };
//    //way - 1
//    int *ptr = arr[0];
//    for(int i=0;i<9;i++){
//        printf("%d ",*(ptr+i));
//        if(i%3==2) printf("\n");
//    }
//
//    //way - 2
//    printf("\nway - 2\n\n");
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            printf("%d ",*(*(arr+i)+j));
//        }
//        printf("\n");
//    }
//}


int main() {

    int a,b;
    float ans;
    scanf("%d%d",&a,&b);
    ans = (a*b)/12;
    printf("%.3f\n",ans);
    return 0;
}
