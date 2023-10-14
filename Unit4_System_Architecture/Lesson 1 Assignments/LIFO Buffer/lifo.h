#ifndef LIFO_H_
#define LIFO_H_  
typedef struct {
    unsigned int length;
    unsigned int* base;
    unsigned int* head;
    unsigned int count;
}LIFO_Buf_t;

typedef enum {
    LIFO_no_error,
    LIFO_full,
    LIFO_empty,
    LIFO_null
}LIFO_Buf_Status;

LIFO_Buf_Status LIFO_push_item (LIFO_Buf_t* lifo, unsigned int item);
LIFO_Buf_Status LIFO_pop_item (LIFO_Buf_t* lifo, unsigned int* item);
LIFO_Buf_Status LIFO_Create (LIFO_Buf_t* lifo, unsigned int length, unsigned int* buf);

#endif
