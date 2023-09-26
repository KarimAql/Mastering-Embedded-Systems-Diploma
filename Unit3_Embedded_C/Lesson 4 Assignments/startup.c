#include <stdint.h>
static unsigned long Stack_top[256]; //256*4 = 1024B reserved for stack
void Reset_Handler(void); //reset handler prototype
void Default_Handler(){
	Reset_Handler();
}
void NMI_Handler() __attribute__ ((weak, alias("Default_Handler"))); //this is to give the functions a weak attribute in order to ae able to override them later on
void H_Fault_Handler() __attribute__ ((weak, alias("Default_Handler")));

void (* const f_p_fn_vectors[])() __attribute__ ((section(".vectors"))) = //vectors section
{
 	(void (*)()) ((unsigned long)Stack_top + sizeof(Stack_top)), //now stack is reserved
 	&Reset_Handler,
 	&NMI_Handler,
 	&H_Fault_Handler
};
static unsigned long Stack_top[256]; //256*4 = 1024B reserved for stack
extern int main(void);
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;


void Reset_Handler(void){
	unsigned int DATA_SIZE = (unsigned char*) & _E_data - (unsigned char*) & _S_data;
	unsigned char* P_src = (unsigned char*) & _E_text;
	unsigned char* P_dst = (unsigned char*) & _S_data;
	for(int i = 0; i < DATA_SIZE ; i++) {
		*((unsigned char*) P_dst++) = *((unsigned char*) P_src++);
	}
	unsigned int bss_size  = (unsigned char*) &_E_bss - (unsigned char*) &_S_bss;
	P_dst = (unsigned char*) & _S_bss;
	for(int i=0;i<bss_size;i++){
		*((unsigned char*) P_dst++) = (unsigned char)0;
	}

	main();
}