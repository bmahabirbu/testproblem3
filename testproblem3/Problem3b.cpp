//Brian Mahabir U08039190
#include "ListNode.h"
#include <algorithm>
#include <iostream>
using namespace std;


void insert(int new_data, ListNode *head) {
	ListNode* new_node = NULL;
	new_node->val = new_data;
	new_node->next = head;
	head = new_node;
}

void display(ListNode *head) {
	ListNode* ptr;
	ptr = head;	
	while (ptr != NULL) {
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
}


ListNode* insertionSortList(ListNode* head) {

	 ListNode* sorted = NULL; //create struct object called sorted
	 ListNode* current = head; //create struct pointer called current and point it to input head
	
	while (current != NULL)
	{
		
		ListNode* nextnode = current->next; //create a list that always points to the next node of current
		
		
		
	}

	head = sorted;
}

int main(void)
{
	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	cout << "The linked list is: ";
	display();
	return 0;
}