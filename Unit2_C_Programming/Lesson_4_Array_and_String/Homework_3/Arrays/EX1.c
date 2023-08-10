#include <stdio.h>

void main(){
    int r,c;
    int i,j;
    int a[2][2];
    int b[2][2];
    int sum[2][2];
    printf("Enter the first matrix\n");
    for (i=0;i<2;i++)
        for (j=0;j<2;j++)
            {printf("a%d%d:",i+1,j+1);
             scanf("%d",&a[i][j]);
             printf("\n");
            }
    printf("Enter the second matrix\n");
    for (i=0;i<2;i++)
        for (j=0;j<2;j++)
            {printf("b%d%d:",i+1,j+1);
             scanf("%d",&b[i][j]);
             printf("\n");
            }

    for (i=0;i<2;i++)
        for (j=0;j<2;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("Sum of Matrices:\n");
    printf("%d\t%d\n%d\t%d\n",sum[0][0],sum[0][1],sum[1][0],sum[1][1]);

}
