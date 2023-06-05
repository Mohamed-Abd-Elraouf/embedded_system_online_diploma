/*
 * Register.h
 *
 * Created: 6/4/2023 11:09:33 PM
 *  Author: DELL
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

//PORTA Register
#define PORTA *(volatile char*)(0x3B)
#define DDRA *(volatile char*)(0x3A)
#define PINA *(volatile char*)(0x39)

//PORTB Register
#define PORTB *(volatile char*)(0x38)
#define DDRB *(volatile char*)(0x37)
#define PINB *(volatile char*)(0x36)

//PORTC Register
#define PORTC *(volatile char*)(0x35)
#define DDRC *(volatile char*)(0x34)
#define PINC *(volatile char*)(0x33)

//PORTD Register
#define PORTD *(volatile char*)(0x32)
#define DDRD *(volatile char*)(0x31)
#define PIND *(volatile char*)(0x30)

#define SET_BIT(REG,PIN) (REG|=(1<<PIN))
#define CLEAR_BIT(REG,PIN) (REG&=~(1<<PIN))
#define TOGGLE_BIT(REG,PIN) (REG^=(1<<PIN))
#define READ_BIT(REG,PIN) ( ((REG)&(1<<(PIN)))>>PIN )

#endif /* REGISTER_H_ */