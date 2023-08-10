#include <stdio.h>
#include <string.h>
void main() {
    char data[100];
    char rvr [100];
    int i=0;
    printf("Enter a String: ");
    gets(data);
    while (data[i]!=0){
        rvr[strlen(data)-i-1] = data[i];
        i++;
    }
    printf("\nThe string is %s \n",data);
    printf("\nThe  reversed string is %s \n",rvr);


}
