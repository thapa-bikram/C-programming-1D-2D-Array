//Write a program to print the transpose of a Matrix entered by the user and store the transpose to new Matrix.
#include<stdio.h>
int main()
{
    int r,c,z;
    printf("Enter the details about the Matrix\n");
    printf("Enter the number of the Rows\n");
    scanf("%d",&r);
    printf("Enter the number of the Columns\n");
    scanf("%d",&c);
    int array[r][c];
    printf("Enter the elements of the Matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    
    printf("The given Matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the given Matrix is :\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
    int newArray[c][r];
    printf("Storing the Transpose of the given Matrix to a new Matrix :\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            newArray[i][j]=array[j][i];
        }
    }
    printf("Printing the values stored in new array\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",newArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}