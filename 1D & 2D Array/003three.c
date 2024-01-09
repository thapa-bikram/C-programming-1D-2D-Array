#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the Array\n");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
   int min=0,max=size-1;
   int swap=0;
   while(min!=max)
   {
    swap=array[min];
    array[min]=array[max];
    array[max]=swap;
    min++;
    max--;
   }
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}