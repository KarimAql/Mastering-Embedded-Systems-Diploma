#include <stdio.h>

void main() {
    int n,i;
    int el,loc;
    int x[10];
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        printf("%d.Enter number: ",i+1);
        scanf("%d",&x[i]);
        printf("\n");
    }
    printf("Enter the element to be inserted:\n");
    scanf("%d",&el);
    printf("Enter the position of the element:\n");
    scanf("%d",&loc);
    for(i=n;i>=loc;i--){
        x[i]=x[i-1];
    }
    n++;
    x[loc-1] = el;
    for (i=0;i<n;i++)
        printf("%d\t",x[i]);


}
