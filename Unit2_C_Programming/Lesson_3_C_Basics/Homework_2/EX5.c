#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if ((((int)a>=97)&&((int)a<=122))||(((int)a>=65)&&((int)a<=90)))
       printf("\n%c is alphabetical\n",a);
       else
       printf("\n%c is not alphabetical\n",a);
    return 0;
}
