/*Write a program to print the row number having the maximum sum in a given 
marix,*/
#include<stdio.h>
int main()
{
    int r , c ;
    int count=0;
    int sum=0;
    int great;
    printf("Enter the number of rows in the Matrix\n");
    scanf("%d",&r);
    int num[r];
    printf("Enter the number of columns in the Matrix\n");
    scanf("%d",&c);
    int array[r][c];
    printf("Enter the Array Elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
                sum += array[i][j];
        }
        printf("Sum of %i row is %i \n ",i,sum);
        num[i]= sum;
        sum=0;
        printf("%i) . %d\n", i ,num[i]);
    }
    great=num[0];
    for(int i=0;i<c;i++)
    {
        
        if(great<num[i])
        {
            great=num[i];
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("The row that has greatest sum is %d \n",count+1);
    printf("The sum is %d \n",num[count]);
    return 0;

}