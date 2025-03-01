#include<stdio.h>
#include<stdlib.h>
#define max 6
int arr[max];
int r=0;
int f=0;
int n=0;

int empty()
{
   if(n==0)
   {
    // printf("empty\n");
    return 1;
   }
   else{
    return 0;
   }
}
int full(int arr[])
{
    // int n=sizeof(arr)/sizeof(int);ṁṇ
    // if((r+1)%max==f)
    if(n==max)
    {
        // printf("full\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

void enque(int arr[],int data)
{
    if(full(arr))
    {
        printf("full\n");
        return;
    }
    else{
        arr[r]=data;
        r=(r+1)%max;
        n++;
    }

}

void deque(int arr[])
{
    if(empty())
    {
        printf("empty\n");
        return;
    }
    else{
        int val=arr[f];
        f=(f+1)%max;
        n--;
    }

}

void print(int arr[])
{
    if(empty())
    {
        printf("no element\n");
        return;
    }
    else{
        int count=0;
        int i=f;
        while(count<n)
        {
            printf("%d\t", arr[i]);
            i=(i+1)%max;
            count++;
        }
        
    }

}

void main()
{
    // int arr[6];
    enque(arr,10);
    enque(arr,20);
    enque(arr,30);
    enque(arr,40);
    enque(arr,50);
    enque(arr,60);
    print(arr);


}