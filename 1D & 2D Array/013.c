//Write a program to display the elements of the diagonal in a two-dimensional array.
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
    
    while(row>0)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",array[row-1][j]);
            row--;
        }
        
    }

    return 0;
}
