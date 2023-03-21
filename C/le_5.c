#include<stdio.h>
#include<string.h>

int main(){
    char date[51];
    gets(date);
    int n = strlen(date);
    int dd=0,mm=0,yy=0,checker=0,counter=0;
    char month[12][15] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for(int i=0;i<n;i++){
        if(date[i]!='-'){
            if(checker==0){//for date
                dd *= 10;
                dd += date[i]-'0';
            }
            else if(checker==1){//for month
                mm *= 10;
                mm += date[i]-'0';
            }
            else{//for year
                yy*=10;
                yy+=date[i]-'0';
            }
        }
        else{
            checker++;
        }
    }
    char d[10];
    switch(dd){
        case 1:
            d[0] = '1';
            d[1] = 's';
            d[2] = 't';
            d[3] = '\0';
            break;
        case 2:
            d[0] = '2';
            d[1] = 'n';
            d[2] = 'd';
            d[3] = '\0';
            break;
        case 3:
            d[0] = '3';
            d[1] = 'r';
            d[2] = 'd';
            d[3] = '\0';
            break;
        case 21:
            d[0] = '2';
            d[1] = '1';
            d[2] = 's';
            d[3] = 't';
            d[4] = '\0';
            break;
        case 22:
            d[0] = '2';
            d[1] = '2';
            d[2] = 'n';
            d[3] = 'd';
            d[4] = '\0';
            break;
        case 23:
            d[0] = '2';
            d[1] = '3';
            d[2] = 'r';
            d[3] = 'd';
            d[4] = '\0';
            break;
        case 31:
            d[0] = '3';
            d[1] = '1';
            d[2] = 's';
            d[3] = 't';
            d[4] = '\0';
            break;

        default:
            d[0] = dd%10+'0';
            dd /=10;
            if(dd!=0){

                d[1] = d[0];
                d[0] = dd+'0';
                d[2] = 't';
                d[3] = 'h';
                d[4] = '\0';
                break;
            }
            d[1] = 't';
            d[2] = 'h';
            d[3] = '\0';
            break;
    }
    printf("%s %s, %d\n",month[mm-1],d,yy);
    return 0;
}
