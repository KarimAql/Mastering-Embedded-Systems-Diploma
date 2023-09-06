#include<stdio.h>
#include<string.h>

void reverseDigits(char* arr, int start, int end){
    char temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    if (start>=end)return;
    reverseDigits(arr, start+1, end-1);
}

int main(){
    int i;
    char a[100];
    printf("Enter a number to reverse: ");
    gets(a);
    int length = strlen(a);
    reverseDigits(a, 0, strlen(a)-1);
    printf("\nThe reversed number is: ");
    for(i = 0; i <length ; i++){
        printf("%c", a[i]);
    }
}
