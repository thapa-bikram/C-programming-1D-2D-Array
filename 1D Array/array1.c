#include<stdio.h>
int main()
{
    int array[5]; // creates an array that have 5 consecutive memory location
    int a[5]={0,1,2,3,4}; // Initializing an Array but make sure the values are of integer type.

    int arr[5]={2,4,6,8,1}; //data are stored in the sequential manner
    /*
    First element arr[0]=2, 
    Second element arr[1]=4, 
    Third element a[2]=6 ....
    [0],[1],[2] are called as index of an Array and each values stores a value. First index is always 0 .
    */
    printf("%d\t",a[0]); //prints element at 0th index
    printf("%d\n",a[4]); //prints elements at 4th index
    a[4]=100; //updatimg value
    printf("%d\n",a[4]); 
    char charr[4]={'a','b','%','&'};
    printf("%c\n",charr[3]);
    int ax[5];
    printf("Enter values for array\n"); //User inputted values 
    for(int i=0;i<4;i++)
    {
        scanf("%d",&ax[i]);
    } 
   return 0;
}