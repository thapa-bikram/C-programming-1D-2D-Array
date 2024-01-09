/*If an array contains n elements, then check of the given array is a palindrome or not.*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter %d elements of the Array\n",size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("%d). ",i+1);
        scanf("%d",&arr[i]);
    }
    //copying this array to another array in reverse order
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        arr2[i]=arr[size-1-i];
    }
    printf("\n\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr2[i]);
    }
    printf("\n\n");
    printf("Values copied to Array 2 in reverse order\n");
    int i=0;
    int j=size-1;
    while(i<=j)
    {
        if(arr[i]==arr2[j])
        {
            printf("The array is Palindrome\n");
        }
        else
        {
            printf("The aray is not a Palindrome\n");
        }
        i++;
        j--;
    }
    return 0;
}