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
#include <unordered_map>

using namespace std;



//创建二叉树
/*void CreateTree(TreeNode **t)
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
}*/
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
/*int canCompleteCircuit(vector<int> &gas, vector<int> &cost) 
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
}*/


//Given numRows, generate the first numRows of Pascal's triangle.
/*vector<vector<int> > Solution::generate(int numRows) {

	vector<vector<int> > result(numRows); //注意vector二维数组定义后不能直接result[i]，要初始化后才可以。
	if (numRows <= 0)
	{
		return result;
	}
	result[0].push_back(1);
	if (numRows == 1)
	{
		return result;
	}
	result[1].push_back(1);
	result[1].push_back(1);
	if (numRows == 2)
	{
		return result;
	}
	for (int i = 3; i <= numRows; i++)
	{
		result[i - 1].push_back(1);
		for (int j = 0; j < result[i - 2].size() - 1; j++)
		{
			result[i - 1].push_back(result[i - 2][j] + result[i - 2][j + 1]);
		}
		result[i - 1].push_back(1);
	}
	return result;
}*/

//Given a binary tree containing digits from0 - 9only, each root - to - leaf path could represent a number. An example is the root - to - leaf path1->2->3which represents the number123. Find the total sum of all root - to - leaf numbers.
//sum-root-to-leaf-numbers
/*int Solution::sumNumbers(TreeNode *root) 
{
	long int result;
	vector<int> DataTree;

}*/



//quicksort 
//都是使用数组的初始值当基准，优化是使用随机产生位置，双向扫描直接交换
/*int Partiton(int data[], int length, int start, int end)
{
	if (data == NULL || length <= 0 || start < 0 || end > length)
		return -1;
	int x = data[start];
	int high = end;
	int low = start;
	while (low < high)
	{
		while (data[high] > x && low < high )
		{		
				high--;
		}
		if (low < high)
		{
			data[low] = data[high];
			low++;
		}else
		{
			break;
		}
		while (data[low] < x && low < high)
		{
			low++;
		}
		if (low < high)
		{
			data[high] = data[low];
			high--;
		}else
		{
			break;
		}
	}
	data[low] = x;
	return low;
}*/
//优化代码 双向扫描直接交换
/*int randomInt(int start, int end)
{
	int result = start + rand() % (end - start);
	cout << result;
	return result;
}
int Partiton(int data[], int length, int start, int end)
{
	if (data == NULL || length <= 0 || start < 0 || end > length)
		return -1;

	int x;
	int low = start;
	int high = end;
//	swap(data[randomInt(start, end)], data[end]);
	high = end - 1;
	x = data[end];
	int temp;
	while (low < high)
	{
		while (data[high] > x && low < high)
		{
			high--;
		}
		while (data[low] < x && low < end)
		{
			low++;
		}
		if (low < high)
		{
			temp = data[low];//替换循环中的swap函数
			data[low] = data[high];
			data[high] = temp;
		}
		else
		{
			break;
		}
		
	}
	if (data[high] > data[end])
	{
		swap(data[end], data[high]);
	}
	
	return high;
}*/

/*void Solution::QuickSort(int data[], int length, int start, int end)
{
	if (data == NULL || length <= 0 || start < 0 || end > length)
		return;
	if (start == end) //注意递归结束的条件，忘记就是循环递归
	{
		return;
	}
	int index = Partiton(data, length, start, end);
    
	if(index > start)
		QuickSort(data, length, start, index-1);
	if (index < end)
	{
		QuickSort(data, length, index+1, end);
	}
}*/

//two-sum
/*vector<int> Solution::twoSum(vector<int> &numbers, int target)
{
	vector<int> result;
	if (numbers.size() == 0)
	{
		return result;

	}
	unordered_map<int, int> hashtable;
	for (int i = 0; i < numbers.size(); i++)
	{
		hashtable[numbers[i]] = i;
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		const int temp = target - numbers[i];
		if (hashtable.find(temp) != hashtable.end())
		{
			if (hashtable[temp] > i)
			{
				result.push_back(i + 1);
				result.push_back(hashtable[temp] + 1);
			}
			break;
		}

	}
	return result;


}*/

//symmetric-tree 判断数是否为对称树 分为递归和非递归解法
bool isSymmetricChild(TreeNode *lt, TreeNode *rt)
{
	if (!lt && !rt && lt->val == rt->val)
		return true;
	if (lt && !rt || !lt && rt)
	{
		return false;
	}
	if (lt->val != rt->val)
	{
		return false;
	}
	return isSymmetricChild(lt->left, rt->right) && isSymmetricChild(lt->right, rt->left);
}
bool Solution::isSymmetric(TreeNode *root)
{
	if (root == NULL)
	{
		return true; 

	}
	return isSymmetricChild(root->left, root->right);
}
