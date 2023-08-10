#include <stdio.h>

void main() {
    int n;
    printf("enter the number of elements: ");
    printf("\n");
    scanf("%d",&n);
    float x[n];
    int i;
    for(i=0;i<n;i++){
        printf("%d.Enter number: ",i+1);
        scanf("%f",&x[i]);
        printf("\n");
    }
    float sum,avg;
    for (i=0;i<n;i++)
        sum+=x[i];
    avg = sum/n;
    printf("\nthe average of the numbers is %.2f\n",avg);


}
