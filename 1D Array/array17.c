//Copy the elements of Array 1 to Array 2.
#include<stdio.h>
int main()
{
    int size;
    int size2;
    int i;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int myArray[size];
    printf("Enter %d elements of the Array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&myArray[i]);
    }
    label:
    printf("Enter the size of the second aray\n");
    scanf("%d",&size2);
    int myArray2[size2];
    if(size2<size)
    {
        printf("The size of 2nd Array must be greater or equal to the size of First Array\n");
        goto label;
    }
    for(i=0;i<size;i++)
    {
        myArray2[i]=myArray[i];
    }
    printf("The elements of Array 1 are finally copied to Array 2\n");

    for(i=0;i<size;i++)
    {
        printf("%d\n",myArray2[i]);
    }
    return 0;

}