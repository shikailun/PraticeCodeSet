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

