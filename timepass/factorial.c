#include<stdio.h>

int factorial(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    printf("enter factorial number\n");
    scanf("%d",&n);

    printf("factorial is %d\n",factorial(n));

    return 0;
}