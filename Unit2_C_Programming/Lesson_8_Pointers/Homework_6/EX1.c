#include <stdio.h>

int main(){
    int m = 29;
    int* ab = NULL;
    printf("Address of m: 0x%p\nValue of m = %d",&m,m);
    printf("\n===============================================================");
    ab = &m;
    printf("\nAddress of pointer ab: 0x%p\nContent of pointer ab = %d",ab,*ab);
    printf("\n===============================================================");
    m = 34;
    printf("\nAddress of pointer ab: 0x%p\nContent of pointer ab = %d",ab,*ab);
    printf("\n===============================================================");
    *ab = 7;
    printf("\nAddress of m: 0x%p\nValue of m = %d",&m,m);

    return 0;
}
