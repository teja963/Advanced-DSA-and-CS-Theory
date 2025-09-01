// C++ program to rotate a Doubly linked
// list counter clock wise by N times
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	char data;
	struct Node* prev;
	struct Node* next;
};

// This function rotates a doubly linked
// list counter-clockwise and updates the
// head. The function assumes that N is
// smallerthan size of linked list. It
// doesn't modify the list if N is greater
// than or equal to size
void rotate(struct Node** head_ref, int N)
{
	if (N == 0)
		return;

	// Let us understand the below code
	// for example N = 2 and
	// list = a <-> b <-> c <-> d <-> e.
	struct Node* current = *head_ref;

	// current will either point to Nth
	// or NULL after this loop. Current
	// will point to node 'b' in the
	// above example
	int count = 1;
	while (count < N && current != NULL) {
		current = current->next;
		count++;
	}

	// If current is NULL, N is greater
	// than or equal to count of nodes
	// in linked list. Don't change the
	// list in this case
	if (current == NULL)
		return;

	// current points to Nth node. Store
	// it in a variable. NthNode points to
	// node 'b' in the above example
	struct Node* NthNode = current;

	// current will point to last node
	// after this loop current will point
	// to node 'e' in the above example
	while (current->next != NULL)
		current = current->next;

	// Change next of last node to previous
	// head. Next of 'e' is now changed to
	// node 'a'
	current->next = *head_ref;

	// Change prev of Head node to current
	// Prev of 'a' is now changed to node 'e'
	(*head_ref)->prev = current;

	// Change head to (N+1)th node
	// head is now changed to node 'c'
	*head_ref = NthNode->next;

	// Change prev of New Head node to NULL
	// Because Prev of Head Node in Doubly
	// linked list is NULL
	(*head_ref)->prev = NULL;

	// change next of Nth node to NULL
	// next of 'b' is now NULL
	NthNode->next = NULL;
}

// Function to insert a node at the
// beginning of the Doubly Linked List
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->prev = NULL;
	new_node->next = (*head_ref);
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;
*head_ref = new_node;
}

/* Function to print linked list */
void printList(struct Node* node)
{
	while (node->next != NULL) {
		cout << node->data << " "
			<< "<=>"
			<< " ";
		node = node->next;
	}
	cout << node->data;
}

// Driver's Code
int main(void)
{
	/* Start with the empty list */
	struct Node* head = NULL;

	/* Let us create the doubly
	linked list a<->b<->c<->d<->e */
	push(&head, 'e');
	push(&head, 'd');
	push(&head, 'c');
	push(&head, 'b');
	push(&head, 'a');

	int N = 2;

	cout << "Given linked list \n";
	printList(head);
	rotate(&head, N);

	cout << "\nRotated Linked list \n";
	printList(head);

	return 0;
}
