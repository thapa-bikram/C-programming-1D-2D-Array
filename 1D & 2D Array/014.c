//Multiply two matrices.
#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("Enter the rows and columnsof the first Matric\n");
    scanf("%d%d",&row1,&col1);
    int array1[row1][col1];
    printf("Enter the Elements of the First matrix\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the rows and columnsof the second Matric\n");
    scanf("%d%d",&row2,&col2);
    int array2[row2][col2];
     printf("Enter the Elements of the Second matrix\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    int sum=0;
    int mul;
    int array3[row1][col2];
    int i, j;
    if(col1==row2)
    {
        printf("you are in the Matrix\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                for(int k=0;k<row2;k++)
                {
                mul=array1[i][k]*array2[k][j];
                printf("array[%d][%d]=%d * array[%d][%d]=%d = %d\n",i ,k,array1[i][k],k ,j,array2[k][j] ,mul);
                sum+=mul;
                }
            } 
        }
    }
   /* for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("%d ",array3[i][j]);
        }
    }*/

    return 0;

}