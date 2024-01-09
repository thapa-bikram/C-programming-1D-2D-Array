//Calculate the product of all the elements of an array 
#include<stdio.h>
int main()
{
    int size;
    int product=1;
    printf("Enter the size of an array \n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of an array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        product=product*array[i];
    }
    printf("The product of al the elements opf an array is %d\n",product);
    return 0;
}