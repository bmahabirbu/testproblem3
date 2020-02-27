//Brian Mahabir U08039190
#include "ListNode.h"
#include <algorithm>
#include <iostream>
using namespace std;





int IsCycle_maxsize(ListNode *head) // use two pointer method to see if there is a 
//cycle and how much iterations it took to find the cycle to get a relative size
{
	ListNode* slow = head;
	ListNode* fast = head;

	for (int i = 0; slow->next && fast->next; i++)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow->val == fast->val)
		{
			return i;
		}
	}
}

bool NodeinCycle(ListNode *head) // uses the max size found in the first function
//to check whether a given node is part of the cycle.
{
	int key = head->val;
	int size = IsCycle_maxsize(head);
	for (int i = 0; head->next && i < size*2; i++)
	{
		if (head->val == key)
		{
			return true;
		}
	}
	return false;
}

ListNode* findCycleStart(ListNode* head) //uses function NodeinCycle, 
//the first node that is in the cycle is the start of the cycle
{ 

	ListNode *current = head;
	while (current->next)
	{
		current = current->next;
		if (NodeinCycle(current))
		{
			return current;
		}
	}
	return NULL;
}