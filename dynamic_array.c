//dynamic array (variable sized array)

//array is internally considered as a pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    //validation
    if(size < 0)
    {
        printf("Size of the array cannot be a negative number\n");
        return 0;
    }

    ptr = (int*)malloc(size*(sizeof(int)));

    printf("Enter the elements of the array:\n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("The elements of the array are:\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d",ptr[i]);
    }

    return 0;
}