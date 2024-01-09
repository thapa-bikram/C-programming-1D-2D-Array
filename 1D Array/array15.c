/*Count the number of triplets whose sum is equal to the given value x.*/
#include<stdio.h>
int main()
{
    int size;
    int i,j,k;
    int first; 
    int givenValue;
    int count=0;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    printf("\n");
    int myArray[size];
    printf("Enter %i elements of an Array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("\n");
    printf("Enter a value for comparision\n");
    scanf("%d",&givenValue);
    printf("Pairs that equal to %d\n",givenValue);
    printf("\n");
    for(i=0;i<32;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("| S.n\t First\t Second\t Third |\n");
    for(i=0;i<32;i++)
    {
        printf("-");
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1 ;j<size;j++)
            {
                for(k=(j+1);k<=size;k++)
                if(myArray[i]+myArray[j]+myArray[k]==givenValue)
                {
                    count ++;
                    printf("| %d\t %d(%d)\t %d(%d)\t  %d(%d) |\n",count,myArray[i],i,myArray[j],j,myArray[k],k);
                }
                else
                {
                    continue;
                }
            }
    
       
    }
    for(i=0;i<32;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("Total number of pairs = %d\n\n",count);
    return 0;
}
