#include<stdio.h>
#define PI 3.14
#define area(r) (PI)*(r)*(r)

void main(){
    int rad ;
    float area;
    printf("Enter the radius: ");
    scanf("%d",&rad);
    area = area(rad);
    printf("The area is %.2f",area);

}
