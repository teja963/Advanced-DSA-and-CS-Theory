// C++ implementation to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
#include <bits/stdc++.h>

using namespace std;

// structure of node of doubly linked list
struct Node {
	int data;
	struct Node* next, *prev;
};

// function to count triplets in a sorted doubly linked list
// whose sum is equal to a given value 'x'
int countTriplets(struct Node* head, int x)
{
	struct Node* ptr1, *ptr2, *ptr3;
	int count = 0;

	// generate all possible triplets
	for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
		for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
			for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next)

				// if elements in the current triplet sum up to 'x'
				if ((ptr1->data + ptr2->data + ptr3->data) == x)

					// increment count
					count++;

	// required count of triplets
	return count;
}

// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node** head, int data)
{
	// allocate node
	struct Node* temp = new Node();

	// put in the data
	temp->data = data;
	temp->next = temp->prev = NULL;

	if ((*head) == NULL)
		(*head) = temp;
	else {
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

// Driver program to test above
int main()
{
	// start with an empty doubly linked list
	struct Node* head = NULL;

	// insert values in sorted order
	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);

	int x = 17;

	cout << "Count = "
		<< countTriplets(head, x);
	return 0;
}
