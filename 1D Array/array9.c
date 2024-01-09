//Find the minimum value out of all the elements in the array
#include<stdio.h>
int main()
{
    int size;
    int value;
    printf("Enter the size of an array \n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of an array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        int min=array[0];
        if(array[i]<min)
        {
            min=array[i];
        } 
        value=min;
    }
    printf("The maximum value out of all the elements in an array is %d\n",value);
    return 0;
}