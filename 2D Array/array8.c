/*Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and(l2,r2).
 Return the sum of the rectangle from (l1,r1) to (l2,r2).*/
#include<stdio.h>
int main()
{
    int l1,r1,l2,r2,i,j;
    int sum=0;
    int r,c;
    printf("enter the number of rows in the matrix\n");
    scanf("%d",&r);
    printf("enter the number of columns in the matrix\n");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the matix\n");
    for(i=0; i<r;i++)
    {
        for(j=0; j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Set the range for l1,r1\n");
    scanf("%d%d",&l1,&r1);
    printf("Set the range for l1,r1\n");
    scanf("%d%d",&l2,&r2);

    for(i=l1; i<=l2;i++)
    {
        for(j=r1; j<=r2;j++)
    {
        sum += a[i][j];
    }
    }
    printf("The sum is %d \n",sum);
    return 0;
    


    
}