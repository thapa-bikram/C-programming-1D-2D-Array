//PAssing array to function, array is passed by reference 
#include<stdio.h>
void value(int newArray[],int size)
{
    printf("Now we are in function\n");
    printf("Insert new values from the function\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&newArray[i]);
    }
    return;
}
int main()
{
    int size;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter elements of an Array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements of an Array are:- \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    value(array,size);
    printf("We are back to the main function\n");
    printf("Now the values in the Array are : -\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    printf("\n\n\n");
    printf("Altered values\n");
     for(int i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;


    return 0;
}