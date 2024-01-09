//Given a Matrix 'a' , print all the elements of the Matrix in wave Order - 2.
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
    for(int j=0;j<col;j++)
    {
        
       if(j%2==0)
        {
            for(int i =row-1;i>=0;i--)
            {
                printf("%d ",matrix[i][j]);
            }
        }
        else
        {
            for(int i=i%2;i<row;i++)
            {
                printf("%d ",matrix[i][j]);
            }
        }
        
    }


    return 0;
}