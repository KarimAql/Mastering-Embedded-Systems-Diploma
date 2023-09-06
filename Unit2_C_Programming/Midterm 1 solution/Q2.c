#include<stdio.h>
#include<math.h>
float squareRoot(int a){
    float res;
    res = sqrt(a);
    return res;

}
int main(){
    int a;
    printf("Enter a number to get square root: ");
    scanf("%d",&a);
    printf("The square root of %d is %.2f",a,squareRoot(a));


}
