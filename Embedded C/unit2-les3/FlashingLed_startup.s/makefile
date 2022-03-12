#prebared by Mohamed A.Elraouf(learn in depth)
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I 
LIBS=
SRC=$(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)


ALL : learn-in-depth.bin
	@echo "<<<<<<everything is build>>>>>>"
%.o : %.s
	$(CC)as.exe $(CFLAGS) $< -o $@
%.o : %.c
	$(CC)gcc.exe $(CFLAGS) -c $< -o $@
learn-in-depth.elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T Linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=MAPFILE.map
learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $<  $@

clean_all: 
	rm *.elf *.bin *.o *.map
	@echo "<<<<<<everything is clean>>>>>>"
clean:
	rm *.elf *.bin
