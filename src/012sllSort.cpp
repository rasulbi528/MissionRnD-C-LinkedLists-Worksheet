/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int c0 = 0, c1 = 0, c2 = 0, i;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == 0)
			c0++;
		else if (temp->data == 1)
			c1++;
		else if (temp->data == 2)
			c2++;
		temp = temp->next;
	}
	temp = head;
	for (i = 1; i <= c0; i++)
	{
		temp->data = 0;
		temp = temp->next;
	}
	for (i = 1; i <= c1; i++)
	{
		temp->data = 1;
		temp = temp->next;
	}
	for (i = 1; i <= c2; i++)
	{
		temp->data = 2;
		temp = temp->next;
	}

}


