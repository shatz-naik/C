#include<stdio.h>
#include<stdlib.h>

int FindLargest(int size,int arr[])
{
    int largest = 0;

  //  largest = arr[0];

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }

    }

    return largest;
}

int main()
{
    int *ptr = NULL;
    int size = 0;
    int largest = 0;


    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    //dynamic memory allocation for array
    ptr = (int*)malloc(size*sizeof(int));

    printf("Enter the elements in the array:\n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    
    largest = FindLargest(size,ptr);

    printf("Largest number of the array is : %d",largest);
    //deallocation of the dynamic memory
    free(ptr);

    return 0;
}