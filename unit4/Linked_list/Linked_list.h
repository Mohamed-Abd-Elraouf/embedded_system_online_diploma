/*
 * Linked_list.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
#include <conio.h>
#include<stdio.h>
#include <string.h>
//define struct for data.
typedef struct{
	int id;
	char name[40];
	float hight;
}sstudent;
//define node for sturct and pointer to next struct.
 typedef struct snode{
	sstudent data;
	struct snode* pnextnode;
}snode;
void add_node();
void view_node();
void delete_node();
void delete_all();
void Get_Nth();
void Get_Length();
#define Dprint(...)    {fflush(stdout);\
						fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout);\
						fflush(stdin);}

#endif /* LINKED_LIST_H_ */
