//  FACTORIAL OF A NUMBER
#include<stdio.h>
int factorial(int num){
        if (num==0){
            return 1;
        }
        else{
            return num*factorial(num-1);
        }
}
void main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
    



    
}