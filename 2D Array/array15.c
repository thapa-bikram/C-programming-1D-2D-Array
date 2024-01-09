//Write a program to print the Multiplicaion of two Matrices given by the user.
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    int i , j,k;
    printf("Program for Matrix Multiplication\n");
    printf("Enter the number of Rows of First Matrix \n");
    scanf("%d",&r1);
    printf("Enter the number of Columns of First Matrix \n");
    scanf("%d",&c1);
    int array1[r1][c1];
    printf("Enter the number of Rows of Second Matrix \n");
    scanf("%d",&r2);
    printf("Enter the number of Columns of Second Matrix \n");
    scanf("%d",&c2);
    int array2[r2][c2];
    if(c1!=r2)
    {
        printf("Matrix Multiplication is not possible\n");
    }
    else
    {
    printf("Enter the elements of the First Matrix\n");
    for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c1;j++)
    {
        scanf("%d",&array1[i][j]);
    }
   }
    printf("Enter the elements of the Second Matrix\n");
    for(int i=0;i<r2;i++)
   {
    for(int j=0;j<c2;j++)
    {
        scanf("%d",&array2[i][j]);
    }
   }
   /*
   for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c1;j++)
    {
        printf("%d ",array1[i][j]);
    }
    printf("\n");
   }
   */

   for(int i=0;i<r2;i++)
   {
    for(int j=0;j<c2;j++)
    {
        printf("%d ",array2[i][j]);
    }
    printf("\n");
   }

   //Code for Multiplication
    int array3[r1][c2];
    int sum=0;
    k=c1;
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2 ;j++)
    {
         array3[i][j]=0;
         for(k=0;k<c1;k++)
         {
            array3[i][j] += array1[i][k] *array2[k][j];
            printf("array1[%i%i]=%i * array2[%i%i]=%i = %i , array3[%i][%i] = %d\n",i,k,array1[i][k],k,j,array2[k][j],array1[i][k]*array2[k][j],i,j,array3[i][j]);

         }
       
          
    }
   }
    printf("array3= \n");
   for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c2;j++)
    {
        printf("array3[%d][%d]=%d\n",i,j,array3[i][j]);
    }
    printf("\n");
   }
   for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c2;j++)
    {
        printf("%d ",array3[i][j]);
    }
    printf("\n");
   }
    }

   return 0;
}
