#include <stdio.h>

int main() {
    float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("\nEnter value of b: ");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, value of a = %.1f\n",a);
    printf("After swapping, value of b = %.1f\n",b);
    return 0;
}
