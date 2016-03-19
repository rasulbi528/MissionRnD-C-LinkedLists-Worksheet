/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int pow(struct node *ele){
	int temp = (ele->digit1) * 10 + ele->digit2;
	return temp;

}
int convert_sll_2digit_to_int(struct node *head){
	struct node *current = head;
	int number = 0;
	if (head == NULL)return  NULL;
	while (current != NULL){
		number = (number + pow(current)) * 100;
		current = current->next;

	}
	number = number / 100;
	free(current);
	return number;
}
