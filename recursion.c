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

void main()
{
    int c = 1;
    // incp(5,c);
    // greet(5);
    // incr(5);
    // decr(5);
    // incdec(5);
    // printf("%d",sumR(5));
    printf("%d", power(2, 0));
}