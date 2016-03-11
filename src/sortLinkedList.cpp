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
	if (head != NULL){
		struct node *q, *p;
		int data;
		q = head;
		while (q != NULL)
		{
			p = q->next;
			while (p != NULL)
			{
				if (q->num>p->num)
				{
					data = q->num;
					q->num = p->num;
					p->num = data;
				}
				p = p->next;
			}
			q = q->next;
		}
		return head;
	}
	else{
		return NULL;
	}
}