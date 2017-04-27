#include "stdafx.h"
#include "pointToOffer.h"




// 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

/*int Solution::NumberOf1(int n) 
{
	int count = 0;
	if (n == 0)
	{
		return count;
	}
   
	

	while (n)  //计算机中的负数是按补码表示
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}*/

//将字符串中的' '替换成'%20'
/*void Solution::replaceSpace(char *str, int length) 
{
	if (str == NULL || length <= 0)
	{
		return;
	}
	int count = 0;
	int i = 0, j = 0;
	int oldnumber = 0;
	while (str[i] != '\0')
	{
		oldnumber++;
		if (*str == ' ')
			count++;
		i++;
	}

	int oldLength = oldnumber;
	int newLength = oldnumber + count * 2;
	if (newLength > length)
	{
		return;
	}
	
	 
	while (oldLength >= 0 && newLength > oldLength )
	{
		if (str[oldLength] != ' ')
		{
			str[newLength--] = str[oldLength];

		}
		else
		{
			str[newLength--] = '%';
			str[newLength--] = '2';
			str[newLength--] = '0';
		}
		oldLength--;

	}

}*/
//用两个栈实现队列
/*void Solution::push(int node) {

	stack1.push(node);

}

int Solution::pop() {
	
	int a;
	if (!stack1.empty())
	{
		while (stack1.empty())
		{
			a = stack1.top();
			stack2.push(a);
			stack1.pop();
		}
	}
	a = stack2.top();
    stack2.pop();
	return a;

}*/

//输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
//使用递归方法
/*ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2)
{
	ListNode * Node = NULL;
	if (pHead1 == NULL)
		return pHead2;
	if (pHead2 == NULL)
		return pHead1;
	if (pHead1->val <= pHead2->val)
	{
		Node = pHead1;
		pHead1 = pHead1->next;
		Node->next = Merge(pHead1, pHead2);
	}
	else
	{
		Node = pHead2;
		pHead2 = pHead2->next;
		Node->next = Merge(pHead1, pHead2);
		
	}
	return Node;
}*/

//递归返回斐波那契数列第n项

/*int Solution::Fibonacci(int n)
{
	if (n <= 0)
		return 0;
	if (n < 3 && n > 0)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}*/

//从上往下打印出二叉树的每个节点，同层节点从左至右打印。
//注意，广度优先遍历图还是二叉树，都会用到队列
/*vector<int> PrintFromTopToBottom(TreeNode* root)
{
	if (root == NULL)
		return;
	TreeNode* p = root;
	queue<TreeNode*> QueueTree;
	QueueTree.push(p);
	vector<int> spreadTraversalTree;
	while (!QueueTree.empty())
	{
		p = QueueTree.front();
		spreadTraversalTree.push_back(p->val);
		QueueTree.pop();
		if (p->left != NULL)
			QueueTree.push(p->left);
		if (p->right != NULL)
			QueueTree.push(p->right);
	}
	return spreadTraversalTree;
}*/


//重建二叉树 根据前序和中序序列
/*TreeNode* Solution::reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
	if( pre.size() == 0 || vin.size() == 0)
		return NULL;
	TreeNode* head = new TreeNode(pre[0]);

	head->left = NULL;
	head->right = NULL;

	vector<int> left_pre, right_pre, left_in, right_in;
	int root = 0;
	for (int i = 0; i < vin.size(); i++)
	{
		if (pre[0] == vin[i])
		{
			root = i;
			break;
		}
	}
	for (int i = 0; i < root; i++)
	{
		left_pre.push_back(pre[i + 1]);
		left_in.push_back(vin[i]);
	}
	for (int i = root+1; i < vin.size(); i++)
	{
		right_pre.push_back(pre[i]);
		right_in.push_back(vin[i]);

	}
	head->left = reConstructBinaryTree(left_pre, left_in);
	head->right = reConstructBinaryTree(right_pre, right_in);

	return head;
}*/