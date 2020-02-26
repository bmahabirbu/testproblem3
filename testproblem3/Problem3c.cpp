//Brian Mahabir U08039190
#include "ListNode.h"
#include <algorithm>
#include <iostream>
using namespace std;

ListNode* findCycleStart(ListNode* head) {

	ListNode *current = head;

	while (current != NULL)
	{
		ListNode* next = current->next;
		ListNode* next2 = current->next->next;
		if(next == next2)
		{
			return 
		}
	}
	return;
}