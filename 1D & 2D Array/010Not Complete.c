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
                printf("The number of %d is %d\n",array[j],maint+1);
            }
        }
        maint=0 ;
        
    }
   
    return 0;
}