/*
A left rotation operation on an array shifts each of the array's elements unit to the left. For example, if left rotations are performed on array , then the array would become

. Note that the lowest index item moves to the highest index in a rotation. This is called a circular array.

Given an array
of integers and a number, , perform left rotations on the array. Return the updated array to be printed as a single line of space-separated integers.

*/


#include<stdio.h>
#include<stdlib.h>




void RotateLeft(int* arr, int size , int no)
{

    for(int j = 1 ; j <= no ; j++)
    {
        int temp = arr[0];

        for(int i = 0 ; i < size-1 ; i++)
        {
            arr[i] = arr[i+1];
        }

        arr[size-1] = temp;
    }

    printf("The new rotated elements are: :\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d \n",arr[i]);
    }

}




int main()
{

    int* arr = NULL;
    int size = 0;
    int no = 0;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);



    arr = (int*)malloc(size*sizeof(int));
    printf("Enter the elements :\n");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

   

    printf("How many numbers of elements must be rotated?\t ");
    scanf("%d",&no);
    
    RotateLeft(arr,size,no);

    return 0;
}