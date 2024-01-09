//Find the second largest element in the given Array.
#include<stdio.h>
int main()
{
    int size;
    int i;
    int max,maxSecond;
    printf("Enter the size of an Array\n");
    scanf("%d",&size);
    int myArray[size];
    printf("Enter %d elements of the Array\n",size);
    for(int i=0;i<size;i++)
    {
        printf("%d). ",i+1);
        scanf("%d",&myArray[i]);
    }
    max=myArray[0];
    for(int i=0;i<size;i++)
    {
        
        if(myArray[i]>max)
        {
            max=myArray[i];
        } 
    }
    printf("The maximum value out of all the elements in an array is %d\n",max);
    for(int i=0;i<size;i++)
    {
        
        if(myArray[i]==max)
        {
            myArray[i]=0;
            printf("1st max value is set to zero\n");
        } 
        
    
    }
    maxSecond=myArray[0];
    for(int i=0;i<size;i++)
    {
        
        if(myArray[i]>maxSecond)
        {
            maxSecond=myArray[i];
        } 
    }
    printf("The 2nd Largest value out of all the elements in an array is %d\n",maxSecond);
    

    
    return 0;

}