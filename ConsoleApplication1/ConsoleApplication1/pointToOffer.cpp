#include "stdafx.h"
#include "pointToOffer.h"




// ����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

/*int Solution::NumberOf1(int n) 
{
	int count = 0;
	if (n == 0)
	{
		return count;
	}
   
	

	while (n)  //������еĸ����ǰ������ʾ
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}*/

//���ַ����е�' '�滻��'%20'
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
//������ջʵ�ֶ���
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

//���������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������
//ʹ�õݹ鷽��
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

//�ݹ鷵��쳲��������е�n��

/*int Solution::Fibonacci(int n)
{
	if (n <= 0)
		return 0;
	if (n < 3 && n > 0)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}*/

//�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
//ע�⣬������ȱ���ͼ���Ƕ������������õ�����
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


//�ؽ������� ����ǰ�����������
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

//�����ӽṹ
/*bool FindSubTree(TreeNode* pRoot1, TreeNode* pRoot2)
{
	bool result1 = false,result2 = false;
	if (pRoot2 == NULL)//ע�� pRoot2���ж�Ӧ����proot1֮ǰ����Ϊ���Ҷ�ӽڵ�root1��root2��Ϊ�գ������ص���false
	{
		return true;
	}
	if (pRoot1 == NULL)
	{
		return false;
	}
	
	if (pRoot1->val != pRoot2->val)
	{
		return false;
	}
	result1 = FindSubTree(pRoot1->left, pRoot2->left);
	result2 = FindSubTree(pRoot1->right, pRoot2->right);
	return result1 && result2;
		
}

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
	bool result = false;
	if (pRoot1 != NULL && pRoot2 != NULL)
	{
		if (pRoot1->val == pRoot2->val)
		{
			result = FindSubTree(pRoot1, pRoot2);
		}
		if (result == false)
		{
			result = HasSubtree(pRoot1->left, pRoot2);
		}
		if (result == false)
		{
			result = HasSubtree(pRoot1->right, pRoot2);
		}

	}
	
		
	
	return result;
}*/
//����������
//�ݹ鷽��
/*void Solution::Mirror(TreeNode *pRoot)
{
	if (pRoot == NULL)
		return;
	if (pRoot->left == NULL && pRoot->right == NULL)
		return;
	swap(pRoot->left, pRoot->right);
	Mirror(pRoot->left);
	Mirror(pRoot->right);
}*/
//�ǵݹ鷽��
/*void Solution::Mirror(TreeNode *pRoot)
{
	if (pRoot == NULL)
		return;
	if (pRoot->left == NULL && pRoot->right == NULL)
		return;
	queue<TreeNode *> t;
	t.push(pRoot);
	TreeNode * r;
	while (t.empty() != true)
	{

		r = t.front();
		t.pop();
		swap(r->left, r->right);
		if (r->right)
		{
			t.push(r->right);

		}
		if (r->left)
		{
			t.push(r->left);
		}

	}
}*/

//�ж�ջ��ѹ�룬��������
//�Լ�д�Ĵ���
/*bool Solution::IsPopOrder(vector<int> pushV, vector<int> popV) 
{
	stack<int>temp;
	bool flag = false;
	if (pushV.size() == 0 || popV.size() == 0)
	{
		return flag;
	}

	int i = 0, j = 0;
	while (pushV[i] != popV[0] && i < pushV.size())
	{
		temp.push(pushV[i]);
		i++;
	}
	if (i < pushV.size() && pushV[i] == popV[0])
	{
		temp.push(pushV[i]);
		i++;

	}
	while (!temp.empty())
	{
		if (popV[j] == temp.top())
		{
			j++;
			temp.pop();
			continue;
		}
		else
		{
			if (i >= pushV.size() && temp.top() != popV[j])
			{
				return flag;

			}
			while ( i< pushV.size() && pushV[i] != popV[j] )
			{
				temp.push(pushV[i]);
				i++;
			}
			if (i< pushV.size() && pushV[i] == popV[j])
			{
				temp.push(pushV[i]);
				i++;
			}

		}

	}
	flag = true;
	return flag;
}*/
//����д��
/*bool Solution::IsPopOrder(vector<int> pushV, vector<int> popV) {
	if (pushV.size() == 0) return false;
	vector<int> stack;
	for (int i = 0, j = 0; i < pushV.size();) {
		stack.push_back(pushV[i++]);
		while (j < popV.size() && stack.back() == popV[j]) {
			stack.pop_back();
			j++;
		}
	}
	return stack.empty();
}*/


//�����г��ִ�������һ�������
//������unordered_map,���ĵײ����ɹ�ϣ��ʵ�ֵģ��൱��boost�е�hash_map 
//�Լ��Ľⷨ
/*int MoreThanHalfNum_Solution(vector<int> numbers) {
	unordered_map<int, int> result;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		result[numbers[i]]++;
		
	}
	int max = 0;
	for (size_t i = 0; i < numbers.size(); i++)
	{
		if (result[numbers[i]] > (numbers.size() / 2))
			max = result[numbers[i]];

	}
	return max;
}*/
//���˵Ľⷨ
//���Ƚ������е�����������ΪҪ������ظ��������������Сһ����飬�����������ͬ�����ֶ�������λ�ã�ֱ���ж����鵱ǰλ�õ����� �� ������λ��+����һ�볤�ȣ�  λ�õ������Ƿ���ȣ���������������
/*int MoreThanHalfNum_Solution(vector<int> numbers) {

	int size = numbers.size() / 2;
	sort(numbers.begin(), numbers.end());
	for (int i = 0; i + size<numbers.size(); i++)
	{
		if (numbers[i] == numbers[i + size])
			return numbers[i];
	}
	return 0;
}*/
 

//�����������ĺ����������
//�ݹ�
/*bool JudgeSequence(vector<int> &sequence, int start, int end)
{
	if (start >= end)
	{
		return true;
		
	}
	int root = sequence[end];
	int i = start;
	for (;  i < end; i++)
	{
		if (sequence[i] > root)
			break;
	}
	int j = i;
	for (; j < end; j++)
	{
		if (sequence[j] < root)
		{
			return false;
		}
	}

	return JudgeSequence(sequence, 0, i-1) && JudgeSequence(sequence, i, j-1);
}
bool Solution::VerifySquenceOfBST(vector<int> sequence) 
{
	if (sequence.size() == 0)
	{
		return false;
	}
	return JudgeSequence(sequence, 0, sequence.size() - 1);
}*/
//�ǵݹ�
/*bool Solution::VerifySquenceOfBST(vector<int> sequence)
{


    int size = sequence.size();
	if (0 == size)return false;

	int i = 0;
	while (--size)
	{
		while (sequence[i++]<sequence[size]);
		while (sequence[i++]>sequence[size]);

		if (i<size)return false;
		i = 0;
	}
	return true;
}*/



//ɾ�������е��ظ��ڵ�
//��һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5
/*ListNode* deleteDuplication(ListNode* pHead)
{
	if (pHead == nullptr)
		return pHead;
	ListNode *nHead = new ListNode(-1);
	ListNode *start = pHead, *p, *r = nHead;
	int val = -10000;
	while (start != nullptr && start->next != nullptr)
	{

		if (start->val == start->next->val)//ȷ����һ���ظ����ֵĵط�
		{
			val = start->val;
			p = start;
			start = start->next;
			delete p;
			continue;
		}
		else if (val == start->val) //val�����ظ�ֵ��Ϊ��ȷ���ظ�ֵ�����ֵĵط�
		{
			p = start;
			start = start->next;
			delete p;
			continue;
		}
		else
		{
			p = start;
			start = start->next;
			p->next = nullptr;
			r->next = p;
			r = r->next;
		}
	}
	if (val == start->val)
	{
		delete start;
	}
	else
	{
		r->next = start;
		r = r->next;
	}
	p = nHead;
	nHead = nHead->next;
	delete p;
	return nHead;
}*/



//��Сk����
//˼·1��ʹ��make_heap()���н���
/*vector<int> Solution::GetLeastNumbers_Solution(vector<int> input, int k)
{
	if (input.size() == 0 || k <= 0 || input.size() < k)
	{
		return vector<int>();
	}
	vector<int> res(input.begin(), input.begin()+k);

	make_heap(res.begin(), res.end());

	for (size_t i = k; i < input.size(); i++)
	{
		if (input[i] < res[0])
		{
			pop_heap(res.begin(), res.end());
			res.pop_back();
			res.push_back(input[i]);
			push_heap(res.begin(), res.end());
		}

	}
	sort_heap(res.begin(), res.end());
	return res;
}*/
//˼·������Ϊset �� multiset�ĵײ�ʵ���Ǻ�������������һ������Ķ��������� ��multiset��ʵ��
/*vector<int> Solution::GetLeastNumbers_Solution(vector<int> input, int k)
{
	if (input.size() == 0 || k <= 0 || input.size() < k)
	{
		return vector<int>();
	}
	multiset<int, greater<int> > leastNumber;//ע������greater���治������
	multiset<int, greater<int> >::iterator iter;

	for (size_t i = 0; i < input.size(); i++)
	{
		if (leastNumber.size() < k)
		{
			leastNumber.insert(input[i]);
			
		}
		else
		{
			iter = leastNumber.begin();
			if (input[i] < *iter)
			{
				leastNumber.erase(*iter);
				leastNumber.insert(input[i]);
			}
		}

	}

	return vector<int> (leastNumber.begin(),leastNumber.end());
}*/


int Solution::FindGreatestSumOfSubArray(vector<int> array) {
	int n = array.size();
	if (n == 0)
	{
		return array.size();

	}

	int *f = new int[n], max = 0x80000000; //ע�⣬������е������Ѳ�����ʽ���ڣ���ֵΪint����Сֵ��int�����ֵΪ0x7fffffff
	for (size_t i = 0; i < array.size(); i++)
	{
		if (i == 0 || f[i-1] < 0)
		{
			f[i] = array[i];

		}
	    if (i != 0 && f[i-1] > 0)
		{
			f[i] = f[i - 1] + array[i];

		}
		if (f[i] > max)
		{
			max = f[i];
		}
	}
	delete[] f;
	return max;
}