/* Address of Array element 
The address of first element of an array is the memory address of the whole Array ,
i.e arr[o] is the address of the whole array.
*/
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter the total number of students in a class?\n");
    scanf("%d",&num);
    int array[num];
    printf("Enter the marks of %d students\n",num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<num;i++)
    {
        printf("The address of a[%d] is %p\n",i,&array[i]);
    }
    return 0;
}