#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%f\n%f\n%f",&a,&b,&c);
    if ((a>=b)&&(a>=c))
        printf("\n%f is the largest",a);
    else if ((b>=a)&&(b>=c))
        printf("\n%f is the largest",b);
    else printf("\n%f is the largest",c);
    return 0;
}
