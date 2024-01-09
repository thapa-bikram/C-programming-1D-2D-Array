//Create a program that finds the second largest element in a one-dimensional array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the Array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the Elements of the Array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int value=array[0];
    for(int i=0;i<size;i++)
    {
        if(value>array[i])
        {
            continue;
        }
        else
        {
            value=array[i];
        }
    }
   printf("The largest value is %d\n",value);
   int second=0;
   for(int i=0;i<size;i++)
    {
        if(array[i]<value && array[i]>second)
        {
            second=array[i];
        }
        
    }
    printf("\t%d\n",second);
    return 0;
    
}