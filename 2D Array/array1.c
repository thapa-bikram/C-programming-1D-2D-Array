//Introduction :- array [row][column];
#include<stdio.h>
int main()
{
    int row , col ; 
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&col);
    int array[row][col];
    printf("Enter the value of array elements\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("Printing out the user inputted array\n");
    for(int i=0; i<row;i++)
    {
        printf("| ");
        for(int j=0;j<col;j++)
        {
            printf("%d",array[i][j]);
            if(j==col-1)
            {
                break;
            }
            else
            {
                printf("  ");
            }

        }
        printf(" |");
        printf("\n");
    }
    return 0;
}