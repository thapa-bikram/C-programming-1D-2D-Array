 for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        int max=array[0];
        if(array[i]>max)
        {
            max=array[i];
        } 
        value=max;
    }
    printf("The maximum value out of all the elements in an array is %d\n",value);