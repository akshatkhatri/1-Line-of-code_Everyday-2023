#include<stdio.h>

int fibonacci(int n){

    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    

}
int main(){

    int n;
    printf("enter the number of fibo terms you want\n");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("incorrect input please try again\n");
    }

    for(int i=0;i<n;i++){
        
        printf("%d ",fibonacci(i));
    }

    return 0;


}