/*Count the number of elements in given array greater than a given number x.*/
#include<stdio.h>
int main()
{
    int size;
    int great;
    int count=0;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int myArray[size];
    printf("Enter %i elements of an Array\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("Now we will find the array elements that are greater than the user inputted range \n");
    printf("Please enter a value ro set criteria \n");
    scanf("%d",&great);
    printf("\n\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("| S.N\tNumber |\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        if(myArray[i]>great)
        {
            count++;
            printf("| %d\t %d    |\n",count,myArray[i]);
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    return 0;


}