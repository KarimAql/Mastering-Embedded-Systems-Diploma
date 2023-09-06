#include<stdio.h>

int summation(int x){
    int sum;
    if(x==0) return 0;
    sum = x+summation(x-1);
    return sum;
}
void main(){
    int a = 100;
    printf("The Sum of numbers from 100 to 0 is %d",summation(a));

}
