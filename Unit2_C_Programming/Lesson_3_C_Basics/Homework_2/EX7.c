#include <stdio.h>

int main() {
    int a,fact=1;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if (a<0) printf("\nError!!!, the factorial of a negative number does not exist.\n");
    int i=a;
    for (i=a;i>1;i--)
        fact*=i;
    printf("\nthe factorial of %d is %d\n",a,fact);
    return 0;
}
