/* Given an array of marks of students, if the marks of any student is less than 35 print its roll number. 
[roll number here reflects to the index of the array]*/

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
        if(array[i]<35)
        {
            printf("The roll number of the student who obtained %d marks is %d\n",array[i],i+1);
        }
        else
        {
            continue;
        }
    }
    return 0;
}