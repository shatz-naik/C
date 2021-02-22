//calculate the sum of the elements of the array

#include<stdio.h>
#include<stdlib.h>

int SumOfArray(int size, int arr[])
{
    int isum = 0;

    for(int i = 0 ; i < size ; i++)
    {
        isum = isum + arr[i];
    }

    return isum ;
}

int main()
{
    int *ptr = NULL;
    int size = 0;
    int sum = 0;


    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    //dynamic memory allocation for array
    ptr = (int*)malloc(size*sizeof(int));

    printf("Enter the elements in the array:\n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    sum = SumOfArray(size,ptr);
  

    printf("Sum of the numbers of the array is : %d",sum);
    //deallocation of the dynamic memory
    free(ptr);

    return 0;
}