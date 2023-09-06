#include<stdio.h>
#include<string.h>

void separateString(char* arr, char* w1, char* w2){
    int i,j,k,sp;
    for (i=0;i<strlen(arr);i++){
        if (arr[i] == ' '){
            sp = i;
            for (j=0;j<sp;j++){
                w1[j] = arr[j];
            }
            w1[j] = '\0';
            for (k=sp+1;k<strlen(arr);k++){
                w2[k-sp-1] = arr[k];
            }
            w2[k] = '\0';
        }

    }
}

int main(){
    char a[100];
    char w1[100];
    char w2[100];
    printf("Enter a string to reverse words: ");
    gets(a);
    separateString(a,w1,w2);
    int i;
    printf("The string with reversed words: \n");
    for (i=0;i<strlen(w2);i++){
        printf("%c",w2[i]);
    }
    printf(" ");
    for (i=0;i<strlen(w1);i++){
        printf("%c",w1[i]);
    }

}
