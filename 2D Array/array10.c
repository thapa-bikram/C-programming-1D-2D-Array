//Given a matrix with 0 and 1 only, find the row with the maximum number of 1.
#include<stdio.h>
int main()
{
    int r,c;
    int count=0;
    int great;
    printf("Enter the size of the desired matrix\n");
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    int record[r];
    printf("Enter the number of columns\n");
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
            if(array[i][j]==1)
            {
                count ++ ;
            }
        }
        record[i] = count;
        count =0;

    }
    great= record[0];
    count=0;
    for(int i=0;i<r;i++)
    {
        if(great<record[i])
        {
            great = record[i];
            count++;
        }
        else
        {
            continue;
        }

    }
    printf("Row = %i has the greatest count\nAnd the count is %d \n",count+1 ,great);


    return 0;
}