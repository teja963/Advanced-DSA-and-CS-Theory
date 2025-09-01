// C++ program to find a pair with given sum x.
#include<bits/stdc++.h>
using namespace std;

// structure of node of doubly linked list
struct Node
{
	int data;
	struct Node *next, *prev;
};

// Function to find pair whose sum equal to given value x.
void pairSum(struct Node *head, int x)
{
	// Set two pointers, first to the beginning of DLL
	// and second to the end of DLL.
	struct Node *first = head;
	struct Node *second = head;
	while (second->next != NULL)
		second = second->next;

	// To track if we find a pair or not
	bool found = false;

	// The loop terminates when two pointers
	// cross each other (second->next
	// == first), or they become same (first == second)
	while (first != second && second->next != first)
	{
		// pair found
		if ((first->data + second->data) == x)
		{
			found = true;
			cout << "(" << first->data<< ", "
				<< second->data << ")" << endl;

			// move first in forward direction
			first = first->next;

			// move second in backward direction
			second = second->prev;
		}
		else
		{
			if ((first->data + second->data) < x)
				first = first->next;
			else
				second = second->prev;
		}
	}

	// if pair is not present
	if (found == false)
		cout << "No pair found";
}

// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node **head, int data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = temp->prev = NULL;
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

// Driver program
int main()
{
	struct Node *head = NULL;
	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);
	int x = 7;

	pairSum(head, x);

	return 0;
}
