//Create a C program to find the sum of all elements in a two-dimensional array.
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the size of an array\n");
    printf("Enter the number of rows \n");
    scanf("%d",&row);
    printf("Enter the number of columns \n");
    scanf("%d",&col);
    int array[row][col];
    printf("Enter the elements of the Array\n");
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
            sum += array[i][j];
        }
    }
    printf("The sum of the Total Elements present in the Array is %d\n",sum);
    return 0;
}