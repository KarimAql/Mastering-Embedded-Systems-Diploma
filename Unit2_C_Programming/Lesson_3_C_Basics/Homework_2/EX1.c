#include <stdio.h>

int main() {
    while(1){
    int a;
    printf("Enter an integer you want to check: ");
    scanf("%d",&a);
    if (a%2==0)
        printf("\n%d is even\n",a);
    else printf("\n%d is odd\n",a);
    }
    return 0;
}
