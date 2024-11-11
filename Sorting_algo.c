#include<stdio.h>
void main()
{
    int i,j,k,temp;
    int arr[6]={12,3,6,78,0,6};
    for(i=5;i>=1;i--)
    {
        k=0;
        
        for(j=0;j<i;j++){
            k++;
            if(arr[j]>arr[k]) 
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }

        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d\t", arr[i]);
    }
}