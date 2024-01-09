//Calculate the sum of all the elements in an Array.
#include<stdio.h>
int main()
{
    int size;
    int sum=0;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    printf("The sum of all the elements of the array is %d\n",sum);
    return 0;
}