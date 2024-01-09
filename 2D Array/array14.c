//Write a program to rotate a matrix 90degree Clockwise. 
#include<stdio.h>
int main()
{
    int r,c,x,z=0;
    printf("Enter the details about the Matrix\n");
    printf("Enter the value of n for n*n matrix\n");
    scanf("%d",&r);
    c=r;
    int array [r][c];
    printf("Enter the elements of the Matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    
    printf("The given Matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the given Matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",array[j][i]);
        }
        printf("\n");
    }
     printf("Storing the Transpose of the given Matrix to the same Matrix :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<r;j++)
        {
            if(i==j)
            {
                array[i][j]=array[j][i];
            }
            else
            {
                z=array[j][i];
                array[j][i]=array[i][j];
                array[i][j]=z;  
            } 
        }
    }
    printf("Printing the new values stored in the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("Now 90 degree rotated Matrix is :\n");
    for(int i=0;i<r;i++)
    {
        int j=0;
        int k=r-1;
        while(j<k)
        {
            int temp= array[i][j];
            array[i][j]=array[i][k];
            array[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("Printing the new values stored in the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}