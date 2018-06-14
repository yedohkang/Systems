// Yedoh Kang
// Systems pd4
// HW6
// 10/13/2017

#include <stdio.h>
#include <stdlib.h>
#include "hw6.h"


void print_list (struct node *head) {
	
	printf("HEAD --> ");
	while (head -> next) {
		
		printf ("%d --> ", head -> x);
		head = head -> next;
			
	}
	
	printf("%d --> ", head -> x);
	printf("NULL\n");
}


struct node * insert_front(struct node *head, int y) {
	
	struct node * insert = (struct node *)malloc(sizeof(struct node));
	
	insert -> x = y;
	insert -> next = head;
	
	return insert;
}

struct node * free_list(struct node *head) {
	
	struct node *beginning = head;
	struct node *current;

	while (head -> next) {
		
		current = head;
		head = current -> next;
		free(current);
		
	}
	
	free(head);
	return beginning;
}

int main() {
	
	struct node *hello = (struct node *)malloc(sizeof(struct node));
	
	hello -> x = 1;
	hello -> next = NULL;
	
	printf("Just created a new node called hello\n");
	
	hello = insert_front(hello, 3);
	hello = insert_front(hello, 5);
	hello = insert_front(hello, 7);
	
	printf("Just inserted 3, 5, 7\n");
	
	print_list(hello);
	
	printf("Just freed hello\n");
	
	printf("Can't print_list(hello) because its allocated memory has been released\n");
}