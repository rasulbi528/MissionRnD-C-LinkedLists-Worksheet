/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node  *temp, *temp1;
	int temp2;
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;
	for (temp = head; temp->next != NULL; temp = temp->next)
	{
		for (temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
		{
			if (temp->num > temp1->num)
			{
				temp2 = temp1->num;
				temp1->num = temp->num;
				temp->num = temp2;
			}
		}
	}
	return head;
}