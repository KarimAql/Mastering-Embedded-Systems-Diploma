#include<stdio.h>

int uniqueNum(int*arr, int size){
    int i,j;
    int unique;
    for (i=0;i<size;i++){
        for(j=1;j<size;j++){
            if (arr[i] == arr[j])
                break;
            else if (arr[i] != arr[j]){
                if(j==size-1){
                    unique = arr[i];
                    return unique;
                }
                else continue;
            }                                       //Can't Solve this Question

        }
    }
}

int main(){
    int arr[5]={2,2,1,4,4};
    printf("%d",uniqueNum(arr,5));
}
