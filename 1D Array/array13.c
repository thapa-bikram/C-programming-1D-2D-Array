/*Find the difference between the sum of elements at even indices to the sum of elements at 
odd indices */
#include<stdio.h>
int main()
{
    int size;
    int sumOdd = 0;
    int sumEven = 0; 
    int total;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int myArray[size];
    printf("Enter %i elements of an Array\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&myArray[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            sumEven += myArray[i];
        }
        else
        {
            sumOdd += myArray[i]; 
        }
    }
    printf("Sum of elements at even indices is %d\n",sumEven);
    printf("Sum of elements at odd indices is %d\n",sumOdd);
    total = sumOdd - sumEven;
    if(total>0)
    {
        printf("%d - %d = %d\n",sumOdd,sumEven,total);
    }
    else
    {
        printf("%d - %d = %d\n",sumEven,sumOdd,total*(-1));
    }

    return 0;


}