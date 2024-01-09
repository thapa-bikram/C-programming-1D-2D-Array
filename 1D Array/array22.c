/*Given an array containing elements from 1 to 100 except one element in this range
is missing. Fimd the missing element.*/
#include<stdio.h>
int main()
{
    int arr[100];
    int num;
    int element;
    printf("Entering values from 1 to 100 in an array\n");
    for(int i =0 ;i<=100 ; i++)
    {
        arr[i]=i;
    }
    printf("Which value would you like to delete?\n");
    scanf("%d",&num);
    for(int i=0;i<=100;i++)
    {
        if(num==arr[i])
        {
            arr[i]=arr[i+1];
        }
    }
    printf("The array contains elements form 1 to 100\n");
    for(int i =0 ; i<100 ; i++)
    {
        for(int j=0;j<100;j++)
        {
            if(i==arr[i])
            {
                continue;
            }
            else
            {
                element = i;
            }
        }
        
    }
    printf("missing element is %d \n",element);
    return 0;
    
} 