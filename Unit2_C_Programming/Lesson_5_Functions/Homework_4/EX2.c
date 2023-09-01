#include<stdio.h>

int factorial(int x){
    int fact;
    if(x==1||x==0) return 1;
    fact = x*factorial(x-1);
    return fact;
}

int main(){
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    printf("\nThe factorial of %d is: %d",x,factorial(x));
}
