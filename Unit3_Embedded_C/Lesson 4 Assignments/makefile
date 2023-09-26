#makefile for assignment 4
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I . 
LIBS=
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_Name=unit3_lab4_cortexM4

all: $(Project_Name).bin
	@echo "========== Build is Finished. =========="

%.o : %.c
	F:\programs\STM32CubeIDE_1.4.0\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.7-2018-q2-update.win32_1.4.0.202007081208\tools\bin\arm-none-eabi-gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_Name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(Project_Name).elf $(Project_Name).axf

$(Project_Name).bin:$(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm -rf *.o *~ *.elf *.hex
	@echo "All clean."

