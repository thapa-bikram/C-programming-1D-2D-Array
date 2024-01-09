/*Create a C function that takes an array as an argument and returns the average of its
elements.*/
#include<stdio.h>
float average(int size, float* a)
{
    float sum=0;
    float avg;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return avg=(float)(sum/size);
}
int main()
{
    int size;
    printf("Enter the size of an Array\n");
    scanf("%i",&size);
    float array[size];
    printf("Enter the elements of the Array\n");
     for(int i=0 ; i<size; i++)
    {
        scanf("%f",&array[i]);
    }

    float avg=average(size,&array[0]);
    printf("The average of the Elements stored in the Array us %0.2f ", avg);
    return 0;
}