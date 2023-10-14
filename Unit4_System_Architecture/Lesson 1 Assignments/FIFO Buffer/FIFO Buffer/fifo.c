#include "fifo.h"
FIFO_Status FIFO_Is_Buff_Full (FIFO_Buf_t* fifo){
    //check if it exists
    if(!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_NULL;
    if (fifo->count >= fifo->length){
        printf("FIFO is full \n");
        return FIFO_Full;
    }
    return FIFO_No_Error;
}

FIFO_Status FIFO_Init (FIFO_Buf_t* fifo, element_type* buff, unsigned int buff_length){
    fifo->base = buff;
    fifo->head = buff;
    fifo->tail = buff;
    fifo->count = 0;
    fifo->length = buff_length;
    return FIFO_No_Error;
}

FIFO_Status FIFO_Enqueue (FIFO_Buf_t* fifo, element_type item){
    //check if it exists
    if(!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_NULL;
    //check if fifo is full
    if(FIFO_Is_Buff_Full(fifo) == FIFO_Full ) //if fifo is full
        return FIFO_Full;
    if(FIFO_Is_Buff_Full(fifo) == FIFO_No_Error ) //if fifo is not full
    {
        *(fifo->head) = item;
        fifo->count ++;
        //to make the fifo circular
        if( fifo->head == (fifo->base + (fifo>length * sizeof(element_type))) ) //if we reached the end
            fifo->head = fifo ->base; //circulate around
        else
            fifo->head++;
        return FIFO_No_Error;
    }
    else{
        printf ("FIFO Enqueue Failed\n");
        return (FIFO_Is_Buff_Full(fifo));
    }
}


FIFO_Status FIFO_Dequeue (FIFO_Buf_t* fifo, element_type* item){
    //check if it exists
    if(!fifo->base || !fifo->head || !fifo->tail)
        return FIFO_NULL;
    //check if it is empty
    if(fifo->count == 0) {
        printf ("FIFO is Empty\n");
        return FIFO_Empty;
    }
    *item = *fifo->tail; //copy data to item
    fifo->count --;
    if( fifo->tail == (fifo->base + (fifo>length * sizeof(element_type))) ) //if we reached the end
        fifo->tail = fifo->base;
    else
        fifo->tail++
    return FIFO_No_Error;

}

void FIFO_Print(FIFO_Buf_t* fifo){
    element_type* temp;
    int i;
    if(fifo->count == 0) {
        printf ("FIFO is Empty\n");
        return FIFO_Empty;
    }
    temp = fifo->tail;
    printf("\n======== Printing FIFO ========\n");
    for (i=0;i<fifo->length;i++){
        printf("\t %X \n",*temp);
        temp++;
    }
    printf("\n======== Print is Done ========\n");

}

