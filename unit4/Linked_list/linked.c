/*
 * linked.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Raouf
 */
#include"Linked_list.h"
#include<stdio.h>
#include<stdlib.h>

snode* head=NULL;

void add_node()
{
	snode* search=head;
	char temp[40];
	snode *present_node;
	present_node=(snode*)malloc(sizeof(snode));
	Dprint("Please Enter ID:");
	gets(temp);
	present_node->data.id=atoi(temp);
	Dprint("Please Enter name:");
	gets(present_node->data.name);
	Dprint("Please Enter hight:");
	gets(temp);
	present_node->data.hight=atof(temp);
	if(head)
	{
		while(search->pnextnode)
		{

			search=search->pnextnode;

		}
		search->pnextnode=present_node;
		present_node->pnextnode=NULL;

	}
	else
	{
		head=present_node;
		present_node->pnextnode=NULL;
	}

}
void view_node()
{
	snode* temp=head;
	int counter=0;
	while(temp)
	{
		Dprint("Record Num %d\n",counter+1);
		Dprint("ID=%d\n",temp->data.id);
		Dprint("Name=%s\n",temp->data.name);
		Dprint("Hight=%f\n",temp->data.hight);
		temp=temp->pnextnode;
		counter++;
	}
	if(counter==0)
	{
		printf("LIST Empty!!!!!!!\n");
	}

}
void delete_node()
{
	int i;
	snode* temp=head,*temp1=temp;
	Dprint("Enter Id To delete it:");
	scanf("%d",&i);
	if(head)
	{
		if((temp->data.id==i)&&(head==temp)) //mean first element wanna delete it.
		{
			head=head->pnextnode;
			free(temp);
		}
		else
		{
			while(temp1->data.id!=i)
			{
				temp=temp->pnextnode;
				temp1=temp->pnextnode;
			}
			temp=temp1->pnextnode;
			free(temp1);
		}
	}
	else
	{
		Dprint("Empty List!!!1\n");
	}

}
void delete_all()
{
	snode* temp=head;
	if(head==NULL)
	{
		Dprint("Empty List!!!\n");
	}
	while(temp)
	{
		snode* temp1=temp;
		temp=temp->pnextnode;
		free(temp1);
	}
	head=NULL;

}
void Get_Nth()
{
	int i,index;
	snode* temp=head;
	Dprint("Enter Index of node:");
	scanf("%d",&index);
	for(i=0;i<index;i++)
	{
		if(temp==NULL)
		{
			Dprint("List Empty!!!\n");
			break;
		}
		else
		{
			temp=temp->pnextnode;
		}
	}
	if(temp)
	{
		Dprint("ID=%d\n",temp->data.id);
		Dprint("Name=%s\n",temp->data.name);
		Dprint("Hight=%f\n",temp->data.hight);
	}
	else
	{
		Dprint("Wrong index!\n");
	}

}
void Get_Length()
{
	int counter=0;
	snode* temp=head;
	while(temp)
	{
		temp=temp->pnextnode;
		counter++;
	}
	if(counter==0)
	{
		Dprint("Empty List!!!!\n");
	}
	else
	{
		Dprint("Length of Linked list=%d\n",counter);
	}
}
