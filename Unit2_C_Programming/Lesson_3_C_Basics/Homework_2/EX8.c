#include <stdio.h>

int main() {
    char c;
    float opa, opb;
    float result;
    printf("Enter an operator either + or - or * or / : ");
    scanf("%c",&c);
    printf("\nEnter the two operands: \n");
    scanf("%f\n%f",&opa,&opb);
    switch (c){
        case '+':
            result= opa+opb;break;
        case '-':
            result = opa-opb; break;
        case '*':
            result = opa*opb; break;
        case '/':
            result =  opa/opb; break;
        default: printf("The operand is not valid\n");
    }
    printf("the result is %f\n",result);
    return 0;
}
