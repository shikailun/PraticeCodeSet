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



//����������
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
//binary-tree-postorder-traversal �ݹ�

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



//reorder-list Given a singly linked list L: L0��L1������Ln-1��Ln, reorder it to : L0��Ln��L1��Ln - 1��L2��Ln - 2����
void Solution::reorderList(ListNode *head) {
	if (head == NULL)
	{
		return;
	}
		ListNode * slow = head;
		ListNode * fast = head->next;
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

}





