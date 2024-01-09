//Implement a function to remove duplicate elements from a one-dimensional array.
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
    int maint=0;
    printf("Finding the duplicate delements\n");
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                maint++;
                array[j]=array[j+1];
            }
        }
        printf("There are %d %ds in the array\n",maint+1,array[i]);
        maint=0;
        
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                array[j]=array[j+1];
               //array[j+1]='\0';
                count++;
                printf("\t%d\n",count);
            }
        }
        
    }
    /* size -=count;
    printf("\nThe new size is %d",size);
    printf("The new array is :\n");*/
    for(int i=0;i<size;i++)
    {
        printf("%d",array[i]);

    }
    return 0;
}