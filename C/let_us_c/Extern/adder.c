#include<stdio.h>


void add(int a,int b){
    extern int sum;
    sum = a+b;
}
