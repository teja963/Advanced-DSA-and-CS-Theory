// C++ implementation to sort a k sorted doubly
// linked list
#include <bits/stdc++.h>
using namespace std;

// a node of the doubly linked list
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

// 'compare' function used to build up the
// priority queue
struct compare {
	bool operator()(struct Node* p1, struct Node* p2)
	{
		return p1->data > p2->data;
	}
};

// function to sort a k sorted doubly linked list
struct Node* sortAKSortedDLL(struct Node* head, int k)
{
	// if list is empty
	if (head == NULL)
		return head;

	// priority_queue 'pq' implemented as min heap with the
	// help of 'compare' function
	priority_queue<Node*, vector<Node*>, compare> pq;

	struct Node* newHead = NULL, *last;

	// Create a Min Heap of first (k+1) elements from
	// input doubly linked list
	for (int i = 0; head != NULL && i <= k; i++) {
		// push the node on to 'pq'
		pq.push(head);

		// move to the next node
		head = head->next;
	}

	// loop till there are elements in 'pq'
	while (!pq.empty()) {

		// place root or top of 'pq' at the end of the
		// result sorted list so far having the first node
		// pointed to by 'newHead'
		// and adjust the required links
		if (newHead == NULL) {
			newHead = pq.top();
			newHead->prev = NULL;

			// 'last' points to the last node
			// of the result sorted list so far
			last = newHead;
		}

		else {
			last->next = pq.top();
			pq.top()->prev = last;
			last = pq.top();
		}

		// remove element from 'pq'
		pq.pop();

		// if there are more nodes left in the input list
		if (head != NULL) {
			// push the node on to 'pq'
			pq.push(head);

			// move to the next node
			head = head->next;
		}
	}

	// making 'next' of last node point to NULL
	last->next = NULL;

	// new head of the required sorted DLL
	return newHead;
}

// Function to insert a node at the beginning
// of the Doubly Linked List
void push(struct Node** head_ref, int new_data)
{
	// allocate node
	struct Node* new_node =
		(struct Node*)malloc(sizeof(struct Node));

	// put in the data
	new_node->data = new_data;

	// since we are adding at the beginning,
	// prev is always NULL
	new_node->prev = NULL;

	// link the old list off the new node
	new_node->next = (*head_ref);

	// change prev of head node to new node
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	// move the head to point to the new node
	(*head_ref) = new_node;
}

// Function to print nodes in a given doubly linked list
void printList(struct Node* head)
{
	// if list is empty
	if (head == NULL)
		cout << "Doubly Linked list empty";

	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

// Driver program to test above
int main()
{
	struct Node* head = NULL;

	// Create the doubly linked list:
	// 3<->6<->2<->12<->56<->8
	push(&head, 8);
	push(&head, 56);
	push(&head, 12);
	push(&head, 2);
	push(&head, 6);
	push(&head, 3);

	int k = 2;

	cout << "Original Doubly linked list:\n";
	printList(head);

	// sort the biotonic DLL
	head = sortAKSortedDLL(head, k);

	cout << "\nDoubly linked list after sorting:\n";
	printList(head);

	return 0;
}
