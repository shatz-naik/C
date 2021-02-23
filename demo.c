#include<stdio.h>


void fun()
{
    static int i = 11;
    auto int j = 11;

    i++;
    printf("static i = %d\n",i);

    j++;    
    printf("auto j = %d \n",j);
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}
