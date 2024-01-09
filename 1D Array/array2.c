//Write a program to print the elements stored in an array in reverse order
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter array elements\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
}