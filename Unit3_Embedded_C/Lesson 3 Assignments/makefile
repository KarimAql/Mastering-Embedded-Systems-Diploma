#makefile for assignment 2
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I . 
LIBS=
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)

all: learn-in-depth_cortexM3.hex
	@echo "========== Build is Finished. =========="

startup.o: startup.s
	F:\programs\STM32CubeIDE_1.4.0\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.7-2018-q2-update.win32_1.4.0.202007081208\tools\bin\arm-none-eabi-as.exe $(CFLAGS) $< -o $@

%.o : %.c
	F:\programs\STM32CubeIDE_1.4.0\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.7-2018-q2-update.win32_1.4.0.202007081208\tools\bin\arm-none-eabi-gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

learn-in-depth_cortexM3.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

learn-in-depth_cortexM3.hex:learn-in-depth_cortexM3.elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm -rf *.o *~ *.elf *.hex
	@echo "All clean."

