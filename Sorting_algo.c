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

#include <stdio.h>


void InsertionSort(int n, int arr[])
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int tempArr[high-low + 1];
    int left = low;
    int right = mid + 1;
    for (int i = 0; i <= high-low; i++)
    {
        if (left <= mid && right <= high)
        {
            if (arr[left] >= arr[right])
            {
                tempArr[i] = arr[right];
                right=right+1;
            }
            else
            {
                tempArr[i] = arr[left];
                left=left+1;
            }
        }
        else
        {
            if(left>mid){
                tempArr[i]=arr[right];
                right=right+1;
            }
            else{
                tempArr[i]=arr[left];
                left=left+1;
            }
        }
            
    }
        for (int i=0;i<high-low+1;i++)
{
    arr[low+i]=tempArr[i];
}
}

void division(int arr[], int low, int high)
{
    if (low>=high)
    {
        return;
    }
    int mid=(high+low)/2;
    division(arr, low, mid);
    division(arr, mid+1, high);
    merge(arr,low,mid,high);
}
int partition(int arr[],int low, int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<=j)
    {
        
        while(i<=high && pivot>=arr[i])
        {
            i++;
        };

        
        while(  pivot<arr[j])
        {
            j--;
        };

        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;


}

void quickSort(int arr[], int low, int high)
{
    int j=0;
if(low<high)
{
    j=partition(arr, low, high);
    quickSort(arr,low, j-1);
    quickSort(arr,j+1, high);

}
}

void main()
{
    /*
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
*/

/*
int arr[9]={1,1,2,3,4,2,4,5,6};
printf("\nbefore merging\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", arr[i]);
}
merge(arr, 0,4,8);
printf("\nafter merging\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", arr[i]);
}
*/

/*
int arr[9]={1,1,2,3,4,2,4,5,6};
printf("\nbefore merging\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", arr[i]);
}
division(arr, 0,8);
printf("\nafter merging\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", arr[i]);
}
division(arr, 0,8);

*/
int a[10]={10,16,8,12,15,6,3,9,5};

printf("\nbefore sorting\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", a[i]);
}
quickSort(a, 0,8);
printf("\nafter sorting\n");
for (int i=0;i<9;i++)
{
    printf("%d\t", a[i]);
}




}
