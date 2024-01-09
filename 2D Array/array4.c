#include<stdio.h>
int main()
{
   int arr [5][5];  //(1,2) is the first row and (3,2) i sthe second row.
   for(int i=0;i<5;i++)
   {
    for(int j=0;j<5;j++)
    {
        arr[i][j]=10;
    }
   }

   for(int i=0;i<5;i++)
   {
    for(int j=0;j<5;j++)
    {
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
   }
   return 0;
}