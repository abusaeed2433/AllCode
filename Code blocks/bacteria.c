#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x,x1,y,z,bact=0;
    scanf("%d",&n);
    for(i=0;i<=30;i++)
    {
        x=pow(2,i);
        if(x==n)
        {
            printf("1");
            return 0;
        }
        else if(x>n)
        {
            bact++;
            y=i-1;
            z=n-pow(2,y);
            again:
            for(i=0;i<y;i++)
            {
                x1=pow(2,i);
                if(x1==z)
                {
                    bact++;
                    printf("%d",bact);
                    return 0;
                }
                else
                {
                    bact++;
                    y=i-1;
                    z=z-x1;
//                    if(z<=2)
  //                  {
    //                    printf("%d",bact+2);
      //                  break;
       //             }
//                    else
                      goto again;
                }
            }
            {
                printf("\n%d",z);
                break;
            }
        }
    }

    return 0;
}
