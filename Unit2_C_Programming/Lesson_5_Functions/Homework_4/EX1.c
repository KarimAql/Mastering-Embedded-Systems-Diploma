#include <stdio.h>
int isPrime(int n){
    int i;
    if (n <= 1)
    return 0;
  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

void primesBetween(int a, int b, int* primes){
    int k;
    for (k=0;k<100;k++)
        primes[k]=0;
    int i,j=0;
    for(i=a; i<=b; i++){
        if (isPrime(i)){
            primes[j]=i;
            j++;
        }
    }
}

void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int values [100];
    primesBetween(a,b,values);
    int i=0;
    printf("\nThe prime values between the two numbers are: ");
    for(i=0;i<100;i++){
        if(values[i]!=0) {
            printf("%d ",values[i]);
        }
        else continue;
    }
}
