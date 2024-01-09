//Addition of two arrays
#include<stdio.h>
int main()
{
    int array1[2][2];
    int array2[2][2];
    int sum [2][2];
    printf("Enter 4 elements of the first Array\n");
    for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        scanf("%d",&array1[i][j]);
    }
   }
   printf("Enter 4 elements of the second Array\n");
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        scanf("%d",&array2[i][j]);
    }
   }
   printf("\n");
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        sum[i][j]=array1[i][j]+array2[i][j];
    }
   }
   
    for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("%d  ",sum[i][j]);
    }
    printf("\n");
   }
   return 0;

}