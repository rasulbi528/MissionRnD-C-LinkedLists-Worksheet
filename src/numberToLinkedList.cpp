/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *t, *p = NULL;

	if (N<0)
	{
		N = -N;
	}

	if (N == 0)
	{
		t = (struct node*)malloc(sizeof(struct node) * 1);
		t->next = p;
		t->num = 0;
		p = t;
	}
	while (N != 0)
	{
		t = (struct node*)malloc(sizeof(struct node) * 1);
		t->num = N % 10;
		t->next = p;
		p = t;
		N = N / 10;
	}

	return p;

}
