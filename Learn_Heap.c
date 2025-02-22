#include <stdio.h>
#define max 10
int arr[max];
int count = 0;
void insertion(int data, int arr[])
{
    count++;
    int ind;
    ind = count;
    arr[ind] = data;
    while (ind > 1)
    {
        int parent = ind / 2;
        if (arr[parent] < arr[ind])
        {
            int temp = arr[parent];
            arr[parent] = arr[ind];
            arr[ind] = temp;
            ind = parent;
        }
        else
        {
            return;
        }
    }
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void deletion( int arr[])
{
    if(count==0)
    {
        printf("empty tree\n");
        return;
    }
   arr[1]=arr[count];
   count--;
   int ind=1;
   while(ind<count)
   {
    int c1=ind*2;
    int c2=(ind*2)+1;
    if( c1 <= count && arr[c1]>arr[ind])
    {
        swap(&arr[ind], &arr[c1]);
        ind=c1;

    }
    else if ( c2 <= count && arr[c2]>arr[ind])
    {
        swap(&arr[ind], &arr[c2]);
        ind =c2;


    }
    else{
        return ;
    }
   }
}

int main()
{
    int arr[max] = {};
    insertion(60, arr);
    insertion(50, arr);
    insertion(40, arr);
    insertion(30, arr);
    insertion(75, arr);
    for (int i = 1; i <= count; i++)
    {
        printf("%d\t", arr[i]);
    }

    deletion(arr);
    printf("\nafter deletion \n");

    for (int i = 1; i <= count; i++)
    {
        printf("%d\t", arr[i]);
    }
    deletion(arr);
    printf("\nafter deletion \n");

    for (int i = 1; i <= count; i++)
    {
        printf("%d\t", arr[i]);
    }


    return 0;
}