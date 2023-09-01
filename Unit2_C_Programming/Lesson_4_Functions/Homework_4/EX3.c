#include <stdio.h>
void stringReverse(char*text, int start, int end){
    if (start>end)
        return;
    char temp = text[start];
    text[start] = text[end];
    text[end] = temp;
    stringReverse(text,start+1,end-1);

}

int main(){
    char text[100];
    printf("Enter a string: ");
    gets(text);
    stringReverse(text,0,strlen(text)-1);
    printf("\nThe Reversed string is: ");
    puts(text);
}
