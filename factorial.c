//accept value from the user and find the factorial of the value
#include<stdio.h>
int PrintFactorial(int val)
{
    int n = val;
    int fact = 1;
    for(int i = n ; i >= 1; i--)
    {
        fact = fact * n ;
        n = n-1 ;
    }

    printf("Factorial of %d is : %d \n ", val,fact);
}


void PrintEvenFact(int val)
{
    int n = val;
    int fact = 1 ;

    for(int i = n ; i >= 1; i--)
    {
        if((i % 2) == 0)
        {
            fact = fact * n ;
            
        }
        n = n-1 ;
    }

    printf("Factorial of even numbers is : %d \n",fact);


}

void PrintOddFact(int val)
{
    int n = val;
    int fact = 1 ;

    for(int i = n ; i >= 1; i--)
    {
        if((i % 2) != 0)
        {
            fact = fact * n ;
            
        }
        n = n-1 ;
    }

    printf("Factorial of odd numbers is : %d \n",fact);


}

int main()
{
    int val = 0;
    

    printf("Enter a value to find its factorial:\n");
    scanf("%d",&val);

    //validation
    if(val < 1)
    {
        val = -val;
    }
    
    PrintFactorial(val);

    PrintEvenFact(val);  
    
    PrintOddFact(val);
    return 0;
}