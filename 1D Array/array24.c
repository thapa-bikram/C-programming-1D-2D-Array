
/*Fid the unique number in a given array where all the elements are being repeated twice with one value being unique*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int array[7]={1,2,3,1,2,3,4};
    for(int i=0;i<7;i++)
    {
        bool flag = false;
        for(int j=i+1;j<7;j++)
        {
            if(array[i]==array[j])
            {
                flag= true;
            }
           if(flag == false)
           {
            printf("%d",array[i]);
            break;
           }
        }
        printf("%d",array[i]);
    }
    return 0;
}