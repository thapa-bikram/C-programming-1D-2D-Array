//A program to reverse the array without using any extra array.
#include<stdio.h>
int main()
{
    int size;
    int start;
    int end;
    int temp;
    printf("Enter the size of Array\n");
    scanf("%d",&size);
    int myArray[size];
    printf("Enter %d elements of the Array\n",size);
    for(int i=0;i<size;i++)
    {
        printf("%d). ",i);
        scanf("%d",&myArray[i]);
    }
    start = 0;
    end = size-1;
    while(start<=end) //for(start=0, end=size-1; start<end ; start++,end--)
    {
        int temp = myArray[start];
        myArray[start]= myArray[end];
        myArray[end]=temp;
        start++;
        end--;
    }

    printf("Reversing the Array\n");
    
    for(int i=0;i<size;i++)
    {
            
            printf("%d\n",myArray[i]);   
    }
    
    return 0;
}