//c function to take a number and sum all digits
#include<stdio.h>
#include<string.h>

int sumAllDigits(char* a){
    int i;
    int d=0,sum=0;
    for (i=0;i<strlen(a);i++)
    {
        d=a[i]-'0';
        sum+=d;
    }
    return sum;
}
int main(){
    char a[100];
    printf("Please enter a number: ");
    gets(a);
    printf("The sum of all digits of %s is %d",a,sumAllDigits(a));
}
