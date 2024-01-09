//Find the maximum element in 1D array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the Array\n");
    scanf("%d",&size);
    int array[size];
    for(int i =0 ;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=1;i<size;i++)
    {
        if(max>array[i])
        {
            continue;
        }
        else
        {
            max=array[i];
        }
    }
    printf("The maximum element stored in the Array is %d \n",max);
    return 0;
}