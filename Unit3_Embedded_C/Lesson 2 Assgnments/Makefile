#makefile for assignment 2
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I . 
LIBS=
SRC = $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As: .s=.o)
Project_name=learn-in-depth 

all: $(Project_name).bin
	@echo "========== Build is Finished. =========="

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o : %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_name).elf: $(OBJ) 
	$(CC)ld.exe -T linker_script.ld $(OBJ) -o $@ -Map=Map_file.map

$(Project_name).bin:$(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

#to remove all executable images
clean:
	rm -rf *.o *~
	@echo "Removed all executable images."
#to remove all executable images and object files
clean_all:
	rm *.bin *.elf *.o
	@echo "Removed all executable images and object files."

