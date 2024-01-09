//Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main()
{
    int array[4][2];
    printf("Enter the roll number and marks of 4 students\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    printf("Roll  Marks\n");
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d      ",array[i][j]);
        }
        printf("\n");
    }
    return 0;

}