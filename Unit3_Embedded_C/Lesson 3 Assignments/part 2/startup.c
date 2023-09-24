#include <stdint.h>
#define STACK_Start_SP 0x20001000
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