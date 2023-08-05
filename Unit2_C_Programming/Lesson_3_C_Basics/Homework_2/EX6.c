#include <stdio.h>

int main() {
    int a,sum;
    printf("Enter a natural number: ");
    scanf("%d",&a);
    int i=0;
    for (i=0;i<=a;i++)
        sum+=i;
    printf ("\nthe sum is %d\n",sum);
    return 0;
}
