#include <stdio.h>
#include <stdint.h>
#include "fifo.h"

int main(){
    element_type i, temp;
    FIFO_Buf_t fifo;
    FIFO_Init(&fifo,buffer,5);
    for (i = 0; i<7 ; i++){
        FIFO_Enqueue(&fifo,i);
    }
    FIFO_Print(&fifo);

    FIFO_Dequeue(&fifo,&temp) ;
    FIFO_Dequeue(&fifo,&temp) ;
    FIFO_Dequeue(&fifo,&temp) ;
    
    FIFO_Print(&fifo);

        return 0;
    }
