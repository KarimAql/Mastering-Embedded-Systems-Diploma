#include <stdio.h>
struct Scomplex{
    float real;
    float imj;
};
struct Scomplex addition (struct Scomplex c1, struct Scomplex c2){
    struct Scomplex sum;
    sum.real = c1.real + c2.real;
    sum.imj = c1.imj+ c2.imj;
    return sum;
}
void main(){
    struct Scomplex c1,c2,sum;
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&c1.real, &c1.imj);
    printf("\nEnter real and imaginary respectively: ");
    scanf("%f %f",&c2.real, &c2.imj);
    sum = addition(c1,c2);
    printf("The sum is %.2f + %.2fi",sum.real,sum.imj);
}
