#include<stdio.h>
int main()
{
    int size;
    printf("enter size\n");
    scanf("%d",&size);
    int arr[size];
    int count=0;
    printf("Enter values of the Array\n");
    for(int i =0 ;i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int start= 0 ;
    int end = size -1 ;
    while(start<end)
    {
        if(arr[start]==arr[end])
        {

            count++;
        }
        else
        {
            count--;
        }
        start++;
        end--;
    
    }
    if(count==size/2)
    {
        printf("this is a palindrome array\n");
    }
    else
    {
        printf("this is not a palindrome array\n");
    }
    return 0;
}