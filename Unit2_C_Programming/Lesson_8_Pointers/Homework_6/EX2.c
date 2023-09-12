#include "stdio.h"

void main(){
    char alphabet [26];
    alphabet[0] = 'A';
    int i = 0;
    for (i=0;i<26;i++)
        alphabet[i+1] = alphabet[i]+1;
    char* p_alphabet = (char*) alphabet;
    printf("The alphabet is: \n");
    for (i=0;i<26;i++)
        printf("%c ",*p_alphabet++);



}
