//Given a Matrix 'a' , print all the elements of the Matrix in wave Order.
#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of Rows in a Matrix\n");
    scanf("%d",&row);
    printf("Enter the number of Columns in a Matrix\n");
    scanf("%d",&col);
    int matrix[row][col];
    printf("Enter the elements of a Matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    //code for wave printing
    for(int i=0;i<row;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<col;j++)
            {
                printf("%d ",matrix[i][j]);
            }
        }
        else
        {
            for(int j=col-1;j>=0;j--)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }


    return 0;
}