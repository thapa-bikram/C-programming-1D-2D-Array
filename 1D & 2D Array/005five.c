/*Develop a program to count the number of even and odd elements in a one-
dimensional array.*/
#include<stdio.h>
int main()
{
    int size;
    int even_count=0;
    int odd_count=0;
    printf("Enter the number of elements of the Array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the Array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Checking for odd Even ");
    for(int i=0;i<size;i++)
    {
        printf("..  ");

    }
    for(int i=0;i<size;i++)
    {
        if(array[i]%2==0)
        { 
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("\n");
    printf("There are %d even elements in th Array\n",even_count);
    printf("There are %d odd elements in th Array\n",odd_count);
    return 0;

}