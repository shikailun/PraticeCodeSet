#pragma once
#include <iostream>
#include <stack>
using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {}
};
class Solution
{
public:

//	int  NumberOf1(int n) {}

//	void replaceSpace(char *str, int length);

//	void push(int node);
//	int pop();
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2);
	


private:
//	stack<int> stack1;
//	stack<int> stack2;

};
