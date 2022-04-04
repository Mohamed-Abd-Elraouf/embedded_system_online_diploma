#prebared by Mohamed A.Elraouf(learn in depth)
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I 
LIBS=
SRC=$(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
Project_name=unit3_lab4_cortexM4

ALL : $(Project_name).bin
	@echo "<<<<<<everything is build>>>>>>"
%.o : %.c
	$(CC)as.exe $(CFLAGS) $< -o $@
%.o : %.c
	$(CC)gcc.exe $(CFLAGS) -c $< -o $@
$(Project_name).elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T Linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=MAPFILE.map
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $<  $@

clean_all: 
	rm *.elf *.bin *.o *.map
	@echo "<<<<<<everything is clean>>>>>>"
clean:
	rm *.elf *.bin
