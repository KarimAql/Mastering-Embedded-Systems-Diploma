#include <stdio.h>

int main() {
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
        printf("\n%c is a vowel\n",c);
    else printf("\n%c is a consonant\n", c);
    return 0;
}
