#include<stdio.h>

int i = 10;             
//global var

static int  j = 10;    
//global static

int main()
{
    printf("static j = %d \n",j);
    printf("auto i = %d",i);

    return 0;
}