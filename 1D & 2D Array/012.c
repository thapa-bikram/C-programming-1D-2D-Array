//Implement a function to find the transpose of a given 2D array.
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of Rows\n");
    scanf("%d",&row);
    printf("Enter the numbef or Columns\n");
    scanf("%d",&col);
    int array[row][col];
    printf("Enter the Elements of the Array\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Finding out the Transpose of the Given MAtrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array[j][i]);
        }
        printf("\n");
    }
    return 0;
}