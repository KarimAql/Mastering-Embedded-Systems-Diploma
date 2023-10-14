#include "lifo.h"
#include <stdio.h>
unsigned int arr [5];
void main(){
    int i = 0;
    unsigned int arr [5]; //static array
    LIFO_Buf_t buf;
    LIFO_Create(&buf,5,arr);
    for( i = 0 ; i < 5 ; i++ ){
        LIFO_push_item(&buf,i);
        printf("pushed item to buffer \n ");
    }
    for( i = 0 ; i < 5 ; i++ ){
        LIFO_pop_item(&buf,&i);
        printf("popped item from buffer \n");
    }

}
