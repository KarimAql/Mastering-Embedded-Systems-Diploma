#ifndef FIFO_H_INCLUDED
#define FIFO_H_INCLUDED

#include <stdio.h>
#include <stdint.h>

//specify the type
#define element_type uint8_t

//specify the buffer length
#define buffer_length 5
element_type buffer[buffer_length];

//fifo datatype:
typedef struct{
    unsigned int length;
    unsigned int count;
    element_type* head;
    element_type* tail;
    element_type* base;

}FIFO_Buf_t;


//status enum
typedef enum{
    FIFO_No_Error,
    FIFO_Full,
    FIFO_Empty,
    FIFO_NULL
}FIFO_Status;

//FIFO APIs

FIFO_Status FIFO_Enqueue (FIFO_Buf_t* fifo, element_type item);
FIFO_Status FIFO_Dequeue (FIFO_Buf_t* fifo, element_type* item);
FIFO_Status FIFO_Init (FIFO_Buf_t* fifo, element_type* buff, unsigned int buff_length);
FIFO_Status FIFO_Is_Buff_Full (FIFO_Buf_t* fifo);
void FIFO_Print(FIFO_Buf_t* fifo);

#endif // FIFO_H_INCLUDED
