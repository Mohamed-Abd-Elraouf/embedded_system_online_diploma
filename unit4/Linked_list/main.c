/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"Linked_list.h"
int main()
{	int i={0};
	while(1)
	{
		Dprint("============================================\n\tchosse of following options\n");
		Dprint("1:ADD student\n");
		Dprint("2:Delet students\n");
		Dprint("3:View students\n");
		Dprint("4:DeleteAll\n");
		Dprint("5:Get Nth node\n");   //give it index of node and it will print data on it.
		Dprint("6:Get Length of Linked List\n");		//get length of total linked list.
		Dprint("Enter Option Num=");
		scanf("%d",&i);
		switch(i)
		{
			case 1: add_node(); break;
			case 2: delete_node(); break;
			case 3: view_node();  break;
			case 4: delete_all(); break;
			case 5: Get_Nth(); break;
			case 6: Get_Length(); break;
			default: Dprint("Wrong Number!!!\n"); break;
		}
	}
	return 0;
}

