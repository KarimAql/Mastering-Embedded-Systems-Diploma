#include<stdio.h>
#include<string.h>

void rvrArr(int* arr, int start, int end){
    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr [end] = temp;
    if (start<end) return;
    rvrArr(arr, start+1,end-1);
}
int main(){
    int a [5] = {1,2,3,4,5};
    rvrArr(a,0,4);
    int i;
    for (i=0;i<5;i++)
        printf("%d ",a[i]);
}
