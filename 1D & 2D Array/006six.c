//Implement a function to check if a given element is present in a one-dimensional array.
#include<stdio.h>
void check(int num , int size, int* a)
{
    int flag= 0;
    for(int i=0;i<size;i++)
    {
        if(num == a[i])
        {
            flag ++;
        }
        else
        {
            continue;
        }
    }
    if(flag!=0)
    {
        printf("Yes the number %d is in the Array \n",num);
    }
     
}
int main()
{
    int size;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the Elements of the Array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int num;
    printf("Enter a number to check if it is present in the Array\n");
    scanf("%d",&num);
    check(num,size,&array[0]);
    return 0;


}