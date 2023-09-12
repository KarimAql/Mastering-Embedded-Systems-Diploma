#include <stdio.h>
#include "string.h"
void main(){
    char str[100];
    printf("Enter a string to reverse: ");
    scanf ("%s",str);
    char* parr = str;
    parr += strlen(str);
    int i;
    printf("The reversed string is: \n");
    for(i=strlen(str);i>=0;i--)
        printf("%c",*parr--);

}
