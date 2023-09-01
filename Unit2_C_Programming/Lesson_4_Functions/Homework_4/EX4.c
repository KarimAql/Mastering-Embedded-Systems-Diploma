#include <stdio.h>

int power(int num, int pow){
    int res;
    if (pow ==0) return 1;
    res = num * power(num, pow-1);
}

int main(){
    int num,pow;
    printf ("Enter a number: ");
    scanf("%d",&num);
    printf ("\nEnter the power: ");
    scanf("%d",&pow);
    printf("%d^%d = %d",num,pow,power(num,pow));
}
