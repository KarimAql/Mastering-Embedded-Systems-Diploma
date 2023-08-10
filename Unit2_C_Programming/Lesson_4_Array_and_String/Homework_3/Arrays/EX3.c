#include <stdio.h>

void main() {
    int r,c;
    printf("enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("\n");
    int i,j;
    float mat[10][10];
    float tr[10][10];
    printf("Enter the elements of the matrix\n");
    for (i=0;i<r;i++)
        for (j=0;j<c;j++)
            {printf("a%d%d:",i+1,j+1);
             scanf("%f",&mat[i][j]);
             printf("\n");
            }
    printf("Entered Matrix: \n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%.2f\t",mat[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<r;i++){
        for(j=0;j<c;j++)
            tr[j][i] = mat [i][j];
    }
    printf("The transpose of the matrix is:\n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%.2f\t",tr[i][j]);
        }
        printf("\n");
    }

}
