/*Rotate a given array 'a' by k steps, where k is non-negative.
Note: k can be greater than n as well where n is the size of array 'a'.
*/
#include<stdio.h>
int main()
{
    int size;
    int rot;
    printf("enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements of the Array\n",size);
    for(int i=0;i <size; i++)
    {
        printf("%d). ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of rotation step\n");
    scanf("%d",&rot);
    int start =0;
    int end = 3;
    int temp;
   
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    start =0;
    end = 1;

   
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    start =2;
    end = 3;

   
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}