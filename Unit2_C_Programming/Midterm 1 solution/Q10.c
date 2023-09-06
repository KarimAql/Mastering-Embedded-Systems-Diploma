#include<stdio.h>

void decimalToBinary(int num, int*bin){
    int i=0;
    if (num==0){
        bin[0]=0;
        return;
    }
    while (num>0){
        bin[i]=num%2;
        num=num/2;
        i++;
    }
}
int countOnes(int* bin){
    int i=0; int sum=0; int maxsum = 0;
    while (i<100){
        if( (bin[i]==0 && bin[i+1]==1) || (bin[i]==1 && bin[i+1]==1) )
            sum +=1;
        else if (bin[i]==1 && bin[i+1]==0){
            if (sum>maxsum)
                maxsum = sum;
            sum =0;
        }
        i++;

    }
    return sum;
}
void main(){
    int bin[100];
    int i,n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    for (i=0;i<100;i++)
        bin[i] = -1;
    decimalToBinary(n,bin);
    printf("The binary representation of %d is: ",n);
    int k;
    for(k=99;k>=0;k--){
        if (bin[k]!=-1)
            printf("%d",bin[k]);
    }
    printf("\nThe max number of ones between two zeros is %d: ",countOnes(bin));
}
