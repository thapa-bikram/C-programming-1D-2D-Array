//Write a C program to sort elements in ascending order.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the Array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the Array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The entered array is \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("Sorting in Ascending Order\n");
    for(int i=0;i<size;i++)
    {
    
        for(int j=0;j<size;j++)
        {
            if(array[i]<array[j])
            {
                printf("%d<%d\n",array[i] , array[j]);
                int swap;
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
            else
            {
                continue;
            }
        }
    }
    printf("The new sorted array is :");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;

}