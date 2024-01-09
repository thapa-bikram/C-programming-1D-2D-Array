/*Find the total number of pairs in the Array whose sum is equal to the given value x. */
#include<stdio.h>
int main()
{
    int size;
    int i,j;
    int first; 
    int givenValue;
    int count=0;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    printf("\n");
    int myArray[size];
    printf("Enter %i elements of an Array\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("\n");
    printf("Enter a value for comparision\n");
    scanf("%d",&givenValue);
    printf("Pairs that equal to %d\n",givenValue);
    printf("\n");
    for(i=0;i<25;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("| S.N\t First \t Second |\n");
    for(i=0;i<25;i++)
    {
        printf("-");
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        int difference =  givenValue - myArray[i];
        if(difference>0)
        {
            for(j =i+1 ;j<size;j++)
            {
                if(difference == myArray[j])
                {
                    
                    count ++;
                    printf("| %d\t %d\t   %d    |\n",count,myArray[i],myArray[j]);
                }
                else
                {
                    continue;
                }

            }
        }
        else
        {
            continue;
        }
       
    }
    for(i=0;i<25;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("Total number of pairs = %d\n\n",count);
    return 0;
}
