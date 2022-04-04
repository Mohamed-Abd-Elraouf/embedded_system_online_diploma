
MEMORY
{
	flash(RX): ORIGIN = 0x00000000, LENGTH = 128K
	sram(RWX): ORIGIN = 0x20000000, LENGTH = 20K
}
SECTIONS
{	
	.text : 
	{
		*(.vector*)
		*(.text*)
		. = ALIGN(4);
		E_text = .;
	} > flash
	.data :
	{	
		. = ALIGN(4);
		S_data = .;
		*(.data*)
		. = ALIGN(4);
		E_data = .;
	} >sram AT>flash
	.bss : 
	{
		. = ALIGN(4);
		S_bss = .;
		*(.bss*)
		E_bss = .;
	
	} > sram
}