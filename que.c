#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int b=-1,f=-1;
int que_array[MAX];
int isEmpty()
{
    if (b==f){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(b==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enque(int n,int a[],int data){
    if(isFull()){
        printf("Queue is Full\n");
        return;
    }
    else{
        b=b+1;
        a[b]=data;
}
}
void deque(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        exit(1);
        }
    else{
        f=f+1;
    }
}

void print(int a[])
{
    if(isEmpty()){
        printf("Queue is Empty\n");
        exit(1);
    }
    else{

    
    printf("queue elements are \n");
    for(int i=f+1;i<MAX;i++ ){
        
        printf("%d\n", a[i]);
    }
    }
}


void main(){
    int e;
    for(int i=0;i<MAX;i++)
    {
        printf("enter element : \n");
        scanf("%d", &e);
        enque(MAX, que_array,e);
    }
    print(que_array);
    enque(MAX, que_array,e);
    print(que_array);

    // deque();
    // deque();
    // deque();
    // deque();
    // print(que_array);


}