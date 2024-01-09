/* GIven ana array of integers, change the value of all off indexed elements to its second
multiple and increment all even indexed value by 10.*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of an array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Printing the original array\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("| Index\t Value|\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("|   %d\t  %d  |\n",i,array[i]);
    }
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("\n");
    printf("Printing the modified array\n");
    printf("\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    printf("| Index\t Value|\n");
    for(int i=0;i<16;i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            printf("|   %d\t  %d  |\n",i,array[i]+10);
        }
        else
        {
            printf("|   %d\t  %d  |\n",i,array[i]*2);
        }
        
    }
    for(int i=0;i<16;i++)
    {
        printf("-");
    }

}