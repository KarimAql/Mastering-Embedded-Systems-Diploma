#include <stdio.h>

int main() {
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    if (a>0)
        printf("\n%.2f is positive\n",a);
    else if (a<0)
        printf("\n%.2f is negative\n",a);
        else printf("\nthe number is zero\n");
    return 0;
}
