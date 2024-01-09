//Givan a n*m matrix 'a' , print al elements of Matrix in Spiral Order.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
    //Display Matrix
    printf("The entered Matrix is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    int minr=0;
    int maxr=row-1;
    int mincol=0;
    int maxcol=col-1;
    int totalElements=row*col;
    int count=0;

    while(count<totalElements)
    {
        for(int i=mincol;i<=maxcol;i++)
        {
            printf("%d",matrix[minr][i]);
            count++;
        }
        minr++;
        
        for(int i=minr;i<=maxr && count>=totalElements;i++)
        {
            printf("%d",matrix[i][maxcol]);
            count++;
        }
        maxcol--;
       
        for(int i=maxcol;i>=mincol && count>=totalElements;i--)
        {
            printf("%d",matrix[maxr][i]);
            count++;
        }
        maxr--;
        
        for(int i=maxr;i>=minr && count>=totalElements;i--)
        {
            printf("%d",matrix[i][mincol]);
            count++;
        }
        mincol++;

    }
   


    return 0;
}