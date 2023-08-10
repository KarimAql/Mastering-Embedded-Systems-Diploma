#include <stdio.h>
#include <string.h>
void main() {
    char c; int i,sum=0;
    char data[100];
    printf("Enter a String: ");
    gets(data);
    printf("\nEnter a character to find frequency: ");
    scanf("%c",&c);
    for (i=0;i<sizeof(data);i++){
        if (data[i]==c)
            sum++;
    }
    printf("The frequency of %c is %d", c, sum);


}
