#include "stdafx.h"
#include "LeetCode.h"
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <stack>
#include <ctime>

using namespace std;



//创建二叉树
void CreateTree(TreeNode **t)
{
	char a;
	cin >> a;
	if (a == '#')
	*t = NULL;
	else
	{
	*t = new TreeNode(-1);
	(*t)->val = a;
	CreateTree(&((*t)->left));
	CreateTree(&((*t)->right));
	}
}
//binary-tree-postorder-traversal 递归

/*vector<int> Solution::postorderTraversal(TreeNode *root) {

		vector<int> result;
		Solution::postorder(result, root);
		return result;

}

void Solution::postorder(vector<int> &result, TreeNode *root)
{
		if (root == NULL)
			return;

		Solution::postorder(result, root->left);
		Solution::postorder(result, root->right);
		result.push_back(root->val);

}*/



//reorder-list Given a singly linked list L: L0→L1→…→Ln-1→Ln, reorder it to : L0→Ln→L1→Ln - 1→L2→Ln - 2→…
/*void Solution::reorderList(ListNode *head) {
	if (head == NULL)
	{
		return;
	}
		ListNode * slow = head;
		ListNode * fast = head;
		while (fast && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;

		}
		ListNode *middle = slow->next;
		slow->next = NULL;

		ListNode *head1 = new ListNode(-1);
		ListNode *r;
		while (middle)
		{
			r = middle;
			middle = middle->next;
			r->next = head1->next;
			head1->next = r;

		}
		middle = head1->next;
		delete head1;

		ListNode *p = head;
		while (middle && p)
		{
			r = middle;
			middle = middle->next;
			r->next = p->next;
			p->next = r;
			p = p->next->next;
		}
	}*/
//Given a linked list, return the node where the cycle begins. If there is no cycle, returnnull.
/*ListNode* Solution::detectCycle(ListNode *head)
{
	if (head == NULL)
		return NULL;
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == NULL)
		{
			return NULL;
		}
		if (fast == slow)
		{
			break;
		}


	}
	if (fast->next == NULL)
	{
		return NULL;
	}

	fast = head;
	while (fast != slow)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return fast;

}*/

// A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null. Return a deep copy of the list.
// solution 1 use a copy list
/*RandomListNode * Solution::copyRandomList(RandomListNode *head) 
{
	if (head == NULL)
		return NULL;
	RandomListNode *newList = NULL;
	RandomListNode *newHead = NULL;
	RandomListNode * p = head;

	while (p != NULL)
	{
		RandomListNode *q = new RandomListNode(p->label);
		q->next = p->next;
		p->next = q;
		p = q->next;  //问题出在这，复制完后应该越过该节点
	}
	p = head;
	while (p != NULL)
	{
		
		if (p->random != NULL)
		{
			p->next->random = p->random->next;
		}
		p = p->next->next;
	}
	p = head;
	while (p != NULL && p->next != NULL)
	{

		if (p == head)
		{

			newHead = p->next;
			newList = newHead;

		}
		else
		{
			newList->next = p->next;
			newList = newList->next;
		}
		p->next = newList->next;
		newList->next = NULL;
		p = p->next;
	}
	return newHead;
}*/

// solution 2 use a map
/*RandomListNode * Solution::copyRandomList(RandomListNode *head) 
{
	if (head == NULL)
	{
		return NULL;
	}
	map<RandomListNode *, RandomListNode *> randomToNext;
	map<RandomListNode *, RandomListNode *>::iterator iter;
	RandomListNode *p = head, * newHead = NULL, *newList = NULL, *r = NULL;
	while (p)
	{
		

		newList = new RandomListNode(p->label);

	    randomToNext.insert(pair<RandomListNode*, RandomListNode *>(p, newList)); //注意使用map时新旧节点的对应关系

		if (newHead == NULL)
		{
			newHead = newList;
			r = newHead;
		}
		else
		{
			r->next = newList;
			r = r->next;
		}
		p = p->next;
	}
	p = head;
	newList = newHead;
	while (p)
	{
		if (p->random != NULL)
		{
			newList->random = randomToNext[p->random]; 
		}
		p = p->next;
		newList = newList->next;
	}
	return newHead;

}*/

// There are N gas stations along a circular route, where the amount of gas at station i isgas[i]. You have a car with an unlimited gas tank and it costscost[i]of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations. Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.
int canCompleteCircuit(vector<int> &gas, vector<int> &cost) 
{
	int numberFlag, leftgas = 0;
	int i,j = 0;
	for (i = 0; i < gas.size(); i++)
	{
		numberFlag = i;
		while (true)
		{
			j = numberFlag;
			if (j >= gas.size())
				j = 0;
			leftgas = leftgas + (gas[j] - cost[j]);
			if (leftgas >= 0)
			{
				if ((leftgas + gas[j] - cost[j]) > 0)
				{ 
					j++;
					continue;
				}
					
				else
				{
					break;
				}

			}
			else
			{
				leftgas = 0;
				break;
			}

		}
			
			
		

	}
	if (j >= gas.size())
	{
		return numberFlag;
	}
	else
	{
		return -1;
	}
}








