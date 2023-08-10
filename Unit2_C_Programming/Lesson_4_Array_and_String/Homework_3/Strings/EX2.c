#include <stdio.h>
#include <string.h>
void main() {
    char data[100];
    int i=0,sum=0;
    printf("Enter a String: ");
    gets(data);
    while(data[i]!=0){
        sum++;
        i++;
    }
    printf("\nLength of string: %d",sum);
}
