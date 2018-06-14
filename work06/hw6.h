// Yedoh Kang
// Systems pd4
// HW6
// 10/13/2017

struct node {
	int x;
	struct node *next;
};

void print_list (struct node *head);

struct node * insert_front(struct node *head, int y);

struct node * free_list(struct node *head);