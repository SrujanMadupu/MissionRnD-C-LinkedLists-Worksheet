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
	struct node *head = NULL,*temp;
	if (N == 0){
		temp = (struct node*)malloc(sizeof(struct node));
		temp->num = N;
		temp->next = NULL;
		head = temp;
	}
	else if (N > 0||N < 0){
		if (N < 0){
			N = N*-1;
		}
		while (N > 0){
			temp = head;
			int r = N % 10;
			temp =(struct node*)malloc(sizeof(struct node));
			temp->num =r;
			if (head== NULL){
				head = temp;
				temp->next = NULL;
			}
			else{
				temp->next = head;
				head = temp;
			}
			N = N / 10;
		}
	}
	return head;
}