#include<stdio.h>
#include "functions.c"


int i = 35 ;
int fun1();
int fun2();

int main()
{
    printf ( "%d\n", i ) ;
    i = fun1() ;
    printf ( "%d\n", i ) ;
    fun2( ) ;
    return 0 ;
}

