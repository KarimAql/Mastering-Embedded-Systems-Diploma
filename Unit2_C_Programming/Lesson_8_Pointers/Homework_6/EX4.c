#include "stdio.h"
void main(){
    int i;
    int arr[5];
    printf("Input 5 elements of the array: \n");
    for(i=0;i<5;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe reversed array is: \n");
    int* parr = (int*)arr;
    parr +=4;
    for (i=5;i>0;i--){
        printf("Element %d : ",i);
        printf("%d\n",*parr--);
    }

}
