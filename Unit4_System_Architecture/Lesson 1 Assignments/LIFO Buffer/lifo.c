#include "lifo.h"
#include <stdio.h>
LIFO_Buf_Status LIFO_push_item (LIFO_Buf_t* lifo, unsigned int item){
    if (!lifo->head || !lifo->base)
        {
            return LIFO_null;
            printf("Error\n");
        }
    if (lifo->count == lifo->length)
        return LIFO_full;
     //if buffer is not full
        (*lifo->head) = item;
        lifo->head++;
        lifo->count++;
        return LIFO_no_error;
    
}
LIFO_Buf_Status LIFO_pop_item (LIFO_Buf_t* lifo, unsigned int* item){
    if (!lifo->head || !lifo->base)
        return LIFO_null;

    if (lifo->count == 0)
        return LIFO_empty;

    lifo->head--;
    *item = *(lifo->head);
    lifo->count --;
    return LIFO_no_error;
}

LIFO_Buf_Status LIFO_Create (LIFO_Buf_t* lifo, unsigned int length, unsigned int* buf){
    lifo->base = buf;
    lifo->head = buf;
    lifo->length = length;
    lifo->count = 0;
    return LIFO_no_error;
}
