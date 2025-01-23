// #include<stdio.h>
// void main()
// {
//     int i,j,k,temp;
//     int arr[6]={12,3,6,78,0,6};
//     for(i=5;i>=1;i--)
//     {
//         k=0;
        
//         for(j=0;j<i;j++){
//             k++;
//             if(arr[j]>arr[k]) 
//             {
//                 temp=arr[j];
//                 arr[j]=arr[k];
//                 arr[k]=temp;
//             }

//         }
//     }
//     for(i=0;i<6;i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }

#include<stdio.h>
void InsertionSort(int n, int arr[])
{
    int key, j;
   for(int i=1;i<=n-1;i++)
   {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j] > key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    

   }
}
void main()
{
int a[7]={14,9,15,12,6,8,13};
int n=sizeof(a)/sizeof(a[0]);
printf("\nbefore sorting \n");
for(int i=0;i<n;i++)
{
    printf("%d\t", a[i]);
}
InsertionSort(n,a);
printf("\nafter sorting \n");
for(int i=0;i<n;i++)
{
    printf("%d\t", a[i]);
}
}
