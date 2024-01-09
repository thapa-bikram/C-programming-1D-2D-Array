//Write a program to find the sum of all the elememts in 1d Array.
#include<stdio.h>
int main()
{
    int sum=0;
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elments of the array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("The sum of the elements of the Array is : %d \n", sum );
    return 0;
}