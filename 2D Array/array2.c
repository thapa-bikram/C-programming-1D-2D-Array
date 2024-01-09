#include<stdio.h>
int main()
{
   int arr [2][2] ={{1,2},{3,2}};  //(1,2) is the first row and (3,2) i sthe second row.
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
   }
   return 0;
}