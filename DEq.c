#include<stdio.h>
#define max 5
int arr[max];
int r=-1,f=-1;
int isFull()
{
    if(r==max-1)
    {
        return 1;
    }
    else return 0;
}
int isEmpty()
{
   if(f==r)
   {
    return 1;
   }
   else return 0;
}
void enqf(int data, int arr[])
{
    // if(f==-1 )
    if(isFull())
    {
        printf("q is full\n");
    }
    else{
        arr[f]=data;
        f=f-1;
    }
}
void enqr(int data,int arr[])
{
    if(isFull())
    {
        printf("q is full\n");
        return;
    }
    else{
        r=r+1;
        arr[r]=data;
    }
}

int deqf(int arr[])
{
    if(isEmpty())
    {
        printf("q is empty\n");
    }
    else{
        int val;
        f=f+1;
        val=arr[f];
        return val;
    }
}
int deqr(int arr[])
{
    if(isEmpty())
    {
        printf("q is empty\n");
    }
    else{
        int val;
        val=arr[r];
        r=r-1;
        return val;
    }
}

void print(int arr[])
{
    for(int i=f+1;i<=r;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    
}

int main()
{
    int arr[max];
    /*
    enqr(3, arr);
    enqr(4, arr);
    enqr(5, arr);
    enqr(6, arr);

    print(arr);

    deqf(arr);

    print(arr);

    deqf(arr);

    print(arr);

    enqr(12, arr);
    enqr(33, arr);
    enqr(45, arr);
    */
    // print(arr);
    enqf(6,arr);
    enqf(5,arr);
    enqf(4,arr);
    enqf(3,arr);

    print(arr);

    // deqr(arr);

    // print(arr);

    // deqr(arr);

    // print(arr);

    // enqf(33,arr);
    // enqf(53,arr);
    // enqf(63,arr);
    
    return 0;
}