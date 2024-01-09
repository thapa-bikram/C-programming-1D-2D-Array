/*WAp to find the deplicate value from a given array of Integers.*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int array[size];
    int duplicates[size];
    int count;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size-1;i++)
    {

        for(int j=i+1;j<size;j++)
        {

            if(array[i]==array[j])
            {
                duplicates[i]=array[i];
                count++;
                
            }
            else
            {
                continue;
            }
        }
    }
        if(count==0)
        {
            printf("There is no duplicate value\n");
        }
        else
        {
            printf("There are %d duplicate values \n",count);
        }
        printf("The following numbers have duplicate values\n");
    
    return 0;
}