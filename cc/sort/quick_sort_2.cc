#include <iostream>
//leetcode

 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
	ListNode *sortList(ListNode *head) {	
	}

	void sortListChild(ListNode *head, int len){
		
	}

	ListNode* findMidNode(ListNode *head){
		if (head == nullptr)
		{
			return nullptr;
		}
	}

	//int listLen(ListNode *head){	
	//	int len = 0;
	//	if (head != nullptr)
	//	{
	//		for (;head != nullptr; head = head->next, ++len)
	//		           ;
	//	}	
	//	return len;
	//}


};