extern int main(void);
static unsigned long stack_top[256];
extern unsigned int E_text;
extern unsigned int S_data;
extern unsigned int E_data;
extern unsigned int S_bss;
extern unsigned int E_bss;

void Reset_Handler(void) 
{	
	unsigned int data_size=(unsigned char *)&E_data-(unsigned char *)&S_data;
	unsigned int bss_size=(unsigned char *)&E_bss-(unsigned char *)&S_bss;
	unsigned char * P_src=(unsigned char *)&E_text;
	unsigned char * P_dst=(unsigned char *)&S_data;
	for(int i;i<data_size;i++)
	{
		*((unsigned char *)P_dst++)=*((unsigned char *)P_src++);
	}
	P_dst=(unsigned char *)&S_bss;
	for(int i;i<bss_size;i++)
	{
		*((unsigned char *)P_dst++)=(unsigned char)0;
	}

	main();
}

void default_Handler(void)
{
	Reset_Handler();
}

void NMI_Handler(void) __attribute__ ((weak, alias ("default_Handler")));
void H_Fault_Handler(void) __attribute__ ((weak, alias ("default_Handler")));
void MM_Fault_Handler(void) __attribute__ ((weak, alias ("default_Handler"))); 
void Bus_Fault(void) __attribute__ ((weak, alias ("default_Handler"))); 
void Usage_Fault_Handler(void) __attribute__ ((weak, alias ("default_Handler")));

void (* const g_p_fn_vectors[])() __attribute__ ((section(".vector")))=
{
	(void(*)())	((unsigned long)stack_top+sizeof(stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault,
	&Usage_Fault_Handler,
};