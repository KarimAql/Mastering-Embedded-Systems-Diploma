#include <stdio.h>

void main() {
int arr[20];
int n,i;
int el;
    printf("enter the number of elements: ");
    printf("\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d.Enter number: ",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&el);
    for (i=0;i<n;i++){
        if (arr[i]==el){
                printf("Element is found at position %d",i+1);
                break;

        }
        if (i==n-1) printf("The element was not found");

    }
}
