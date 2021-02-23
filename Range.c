
#include<stdio.h>

void PrintRange(int,int);

void PrintRange(int no1,int no2)
{
    int i = 0;

    printf("Numbers from the range are : \n");
    for(i = no1 ; i <= no2 ; i++)
    {
        
        printf("%d \t",i);
    }
    printf("\n");
}

void PrintEvenRange(int no1, int no2)
{
    printf("Even numbers are:\n");
    for(int i = no1 ; i <= no2 ; i++)
    {
        if(i%2==0)
        {
            printf("%d \t",i);
        }
        printf("\n");
    }
}


void PrintAdditionRange(int no1, int no2)
{
    int sum = 0;

    for(int i = no1 ; i <= no2 ; i++)
    {
        sum = sum + i ;
    }
    printf("Sum of the range is: %d \n",sum);
}

void PrintRangeReverse(int no1,int no2)
{
    int i = 0;

    printf("Numbers from the range in Reverse are : \n");
    for(i = no2 ; i >= no1 ; i--)
    {
        
        printf("%d \t",i);
    }
    printf("\n");
}

int main()
{
    int no1 = 0, no2 = 0;

    printf("Enter first number for the range:\n");
    scanf("%d",&no1);

    printf("Enter second number for the range:\n");
    scanf("%d",&no2);

    PrintRange(no1,no2);
    PrintEvenRange(no1,no2);
    PrintAdditionRange(no1,no2);
    PrintRangeReverse(no1,no2);

    return 0;
}