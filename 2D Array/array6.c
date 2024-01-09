//Find the sum of elements of the array
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns of the Matrix\n");
    scanf("%d%d",&r,&c);
    int array1[r][c];
    int sum =0;
    printf("Enter %d elements of the Array\n",r*c);
    for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&array1[i][j]);
    }
   }
    for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        sum += array1[i][j];
    }
    printf("\n");
    printf("%d  ",sum);
   }
   return 0;

}