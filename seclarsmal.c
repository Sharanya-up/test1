#include<stdio.h>
int secsmall(int arr[],int n)
{
    int min=arr[0];
    int secmin=arr[0];
    int i;
    for(i=0;i<n;i++)
    {
       // printf("%d  ",arr[i]);
        if(arr[i]<min)
        {
            secmin=min;
           min=arr[i];
       }
    }
    return secmin;
}

int seclar(int arr[],int n)
{
    int i,first,second;
    first=second=arr[0];

    for(i=0;i<n;i++)
    {
        //printf("%d  ",arr[i]);
      if(arr[i]>first)
      {
          second=first;
          first=arr[i];
      }

    }
    return second;
}
    int main()
    {
        int n;
        printf("the number of elements:");
        scanf("%d",&n);
        int arr[n],i;
        printf("enter the elemnts of array:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(n<2)
        {
            printf("invalid input");
         return 0;
        }


        else{
            int s1=secsmall(arr,n);
            printf("the second smallest element is %d",s1);
            int s2=seclar(arr,n);
            printf("the second largest element is %d",s2);

        }
    return 0;
}

