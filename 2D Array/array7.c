//Find the maximum & minimum element of the 2D Array.
#include<stdio.h>
int main()
{
    int r,c;
    int count1;
    int i, j ,k ,l;
    printf("Enter the maxber of rows and columns of the array\n");
    scanf("%d%d",&r,&c);

   int arr [r][c];  
   int max,min;
   int index;
   printf("Enter the elements of the Array\n");
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
   max = arr[0][0];
   min = arr[0][0];

   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        if(max>arr[i][j])
        {
           break;
        }
        else
        {
            max=arr[i][j];
        }
    }
   }
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        if(max==arr[i][j])
        {
           break;
        }
    }
   }
    for(k=0;k<r;k++)
   {
    for(l=0;l<c;l++)
    {
        if(min<arr[k][l])
        {
           break;
        }
        else
        {
            min=arr[k][l];
        }
    }
    }
    printf("The greatest value stored in the array is : \n");
    printf("%d \n",max);
    printf("The index of the greatest value is : [%d %d]\n",i,j);

    printf("The least value stored in the array is : \n");
    printf("%d \n",min);
    printf("The index of the least value is : [%d %d]\n",k,l);
  
   return 0;
}
