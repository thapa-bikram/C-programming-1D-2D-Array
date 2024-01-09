//Passing array to the function

#include<stdio.h>
int sum(int arr[],int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    {
        total = total + arr[i];
    }
    return total;
}

int main()
{
    int total;
    int size=5;
    int array[size];
    printf("Enter elements of an array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
   total = sum(array,size);
   printf("The sum of the elements in an array is %d \n",total);
   return 0;

}