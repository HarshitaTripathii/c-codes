/*
//  FACTORIAL OF A NUMBER
#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num==1)  //BASE CASE
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
void main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
}*/

// DECRESING NUMBER n TIMES

#include <stdio.h>
#include<math.h>
void greet(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Good Morning\n");
    greet(n - 1);
    return;
}
// parameterized method of printing
void incp(int n, int count)
{
    if (count == n + 1)
        return;
    printf("%d\n", count++);
    incp(n, count);
}
void incr(int n)
{
    if (n == 0)
    {
        return;
    }
    incr(n - 1);
    printf("%d\n", n);
    return;
}
void decr(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    decr(n - 1);
    return;
}

void incdec(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    incdec(n - 1);
    printf("%d\n", n);
}

int sumR(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumR(n - 1);
}

int power(int base, int index)
{
    if (index == 0)
    {
        return 1;
    }
    return base * power(base, index - 1);
}
void fibNormal(int n)
{
    int a=0;
    int b=1;
    printf("%d\n%d\n", a, b);

    for (int i=0;i<n;i++)
    {
         int c=a+b;
         printf("%d\n", c);
         a=b;
         b=c;
    }
}
// MULTIPLE CALL RECURSION
int fibRec(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibRec(n-1)+fibRec(n-2);
}
// single or double steps only
int stairPath1(int n){
    if (n==1 || n==2)
    {
        return n;
    }
    int sum= stairPath1(n-1)+stairPath1(n-2);
    return sum;
}

// single or double steps or 3rd steps only
int stairPath2(int n){
    if (n==1 || n==2)
    {
        return n;
    }
    if (n==3){
        return n+1;
    }
    int sum= stairPath2(n-1)+stairPath2(n-2)+stairPath2(n-3);
    return sum;
}

int Maze(int n, int m){
    // if (n<=3 &&  m==1 || m<=3 && n==1 ){
    //     return 1;
    // }
    if (n==1 || m==1)
    {
        return 1;
    }
    int result=Maze(n-1,m)+Maze(n,m-1);
    return result;
}
// int maze(int row, int col){
//     int left=row;
//     int up=col;

// }

int  logBigPower(int base, int index)
{
    if(index==1)
    {
        return base;
    }
    if(index==0) return 1;
    int result=logBigPower(base, index/2);
    int ans=result*result;
    if (index%2 !=0){
        ans=ans*base;
    }
    return ans;
}


void main()
{
    int c = 1;
    // incp(5,c);
    // greet(5);
    // incr(5);
    // decr(5);
    // incdec(5);
    // printf("%d",sumR(5));
    // printf("%d", power(2, 0));
    // fibNormal(6);
    // printf("%d\n", fibRec(6));
    // printf("%d\n", stairPath1(5));
    // printf("%d\n", stairPath2(2));
    // printf("%d\n", logBigPower(2,10));
        printf("%d\n", Maze(5,6));


}