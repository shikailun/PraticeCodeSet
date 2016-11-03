// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "stdlib.h"
#include <algorithm>
#include <set>
#include <stack>
#include <ctime>

using namespace std;

// fdsjaklj




// ��Ϊ���  ����һ���򵥴����¼����Сģ�� ��ȡ·���е��ļ�����
string Getfilename(string filename)
{
	string address;
	address = filename.substr(filename.find_last_of('\\') + 1, filename.length() - filename.find_last_of('\\'));

	if (address.length() > 16)
	{
		return address.substr(address.length() - 16, 16);

	}
	return address;


}

//����������
void CreateTree(TreeNode **t)
{
	char a;
	cin >> a;
	if (a == '#')
		*t = NULL;
	else
	{
		*t = new TreeNode;
		(*t)->a = a;
		CreateTree(&((*t)->left_tree));
		CreateTree(&((*t)->right_tree));
	}
}
//�������������
void PreOrder(TreeNode *t)
{
	if (t != NULL)
	{
		cout << t->a;
		PreOrder(t->left_tree);
		PreOrder(t->right_tree);
	}

}
//���������
void ReverseTree(TreeNode **t)
{
	if ((*t) == NULL)
		return;
	if ((*t)->left_tree == NULL && (*t)->right_tree == NULL)
		return;
	swap((*t)->left_tree, (*t)->right_tree);
	ReverseTree(&(*t)->left_tree);
	ReverseTree(&(*t)->right_tree);


}
//evaluate-reverse-polish-notation
void FunctionStack(stack<int> &temp, char operation)
{
	int result = 0, a = 0, b = 0;

	a = temp.top();
	temp.pop();
	b = temp.top();
	temp.pop();
	switch (operation)
	{
	case '+': result = a + b; break;
	case '-': result = b - a; break;
	case '*': result = b * a; break;
	case '/': if (a == 0)break; result = b / a; break;
	default:
		break;
	}
	temp.push(result);
}
int main()
{
	//ʮ������ת��Ϊʮ����
	/*string s;
	int len ;
	int t;
	int count ;
	while (cin >> s)
	{
	len = s.length();
	t = 0;
	count = 0;
	s = s.substr(2, len - 1);
	len = s.length();
	for (int i = 0; i < len; i++)
	{

	switch (s[i])
	{
	case 'A': t = 10 * pow(16, len - 1 - i); break;
	case 'B': t = 11 * pow(16, len - 1 - i); break;
	case 'C': t = 12 * pow(16, len - 1 - i); break;
	case 'D': t = 13 * pow(16, len - 1 - i); break;
	case 'E': t = 14 * pow(16, len - 1 - i); break;
	case 'F': t = 15 * pow(16, len - 1 - i); break;
	default: t = (s[i] - '0') * pow(16, len - 1 - i); break;
	}
	count = count + t;

	}
	cout << count;

	}*/

	//vector��ά�������
	//	vector <double>   v;
	//	vector <   vector <double>   >   v2d;
	//	vector<int>::iterator iter;
	/*int flag = 0;
	v.push_back(1.0);
	v.push_back(2.0);
	v.push_back(3.0);
	v.push_back(4.0);
	v2d.push_back(v);
	v.clear();
	v.push_back(11.0);
	v.push_back(12.0);
	v.push_back(13.0);
	v.push_back(14.0);
	v2d.push_back(v);

	for (int i = 0; i < v2d.size(); i++)
	for (int j = 0; j < v2d[i].size(); j++)
	if (v2d[i][j] == 4.00)
	{

	flag = 1;
	break;
	}

	cout << flag;*/


	//�ַ����пո��滻

	/*	string s,t;
	int n,j = 0;*/
	//	t[0] = 'r';ע��������ֵ�������
	//	cout << t[0];
	/*	string w = "mD lrD ufjqPnn XHkC CHpx fr IbsvbwHKSqghPsHrzfGiuD tyCtkl    SWmq  lWXCLDDhTbtNvbgGsa YrAazlMyB  nlpX egvhZeAM HaPva  gsREX N fh cd  t  gVjcj  Wfr fC";
	cout << w.length() << endl;
	cout << " test" << sizeof(t) << endl;
	getline(cin, s);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
	if (s[i] == ' ')
	{
	/*t.push_back('%');
	t.push_back('2');
	t.push_back('0');
	// t[j] = '%'
	// t[j+1] = '2';
	// t[j+2] = '0'; ������ֵ���ԣ�����֪��Ϊʲô����Ϊtû�г�ʼ����������push_back
	t+= '%';
	t+= '2';
	t+= '0';
	//			j = j + 3;
	}
	else
	{
	//t.push_back(s[i]);
	t+= s[i];
	//			j = j + 1;
	}
	}

	cout << t << endl;*/

	//����һ��int�����������մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ����� �����������������¼�Ƿ��ظ� 

	/*long int number;
	int i = 0;
	char s[50];
	string t;
	cin >> number;
	if (number != 0)
	{
	while (true)
	{
	if (number == 0)
	break;
	s[i] = number % 10 + '0';
	number /= 10;
	i++;
	}
	s[i] = '\0';
	}
	i = 0;


	while (s[i] != '\0')
	{

	if (t.find(s[i]) == -1)
	{
	t.push_back(s[i]);
	i++;
	}
	else
	{
	i++;

	}

	}
	cout << t;*/


	//��ת����
	/*string s,t,m;
	int i;
	getline(cin,s);
	i = s.length()-1;
	while (i >= 0)
	{
	while (i >= 0&&s[i] != ' ')
	{
	t.push_back(s[i]);
	i--;
	}

	reverse(t.begin(),t.end());
	m = m+t+' ';
	cout << t << " ";
	t.clear();
	i--;
	}

	cout << m;*/

	/*string s;
	stack<string> sstack;
	while (cin >> s)
	{
	sstack.push(s);
	}

	while (sstack.size() != 1)
	{
	cout << sstack.top() << " ";
	sstack.pop();
	}
	cout << sstack.top() << endl;*/


	//2016У�аٶ� C������Ҫת��һ���ﷸ��D�У�C����n���ﷸ����������ʱ����˳������ÿ���ﷸ��һ������ֵ��ֵԽ����Խ�ء�����Ϊ�˷�������г�����ת������ʱ��������c�����ˣ�ͬʱҪ��ת�Ʒ��˵�����ֵ֮�Ͳ�����t�����ж�����ѡ��ķ�ʽ�� ��һ��������������:n��t��c(1��n��2e5,0��t��1e9,1��c��n)���ڶ��а�����ʱ�����ÿ�����˵�����ֵai(0��ai��1e9)  
	//��������:
	//3 100 2
	//1 2 3

	//�������:
	//2

	/*   int n, t, c, i = 1, k;
	int result = 0;
	cin >> n >> t >> c;
	int *p = new int[n + 1];

	p[0] = 0;

	for (i = 1; i <= n; i++)
	{
	cin >> p[i];
	}
	int count = 0;


	for (i = 1; (n - i + 1) >= c&&i < n; i++)
	{
	count = 0;
	for (int j = i, k = 1; (n - i + 1) >= c&&k <= c&&j <= n; k++, j++)
	{
	count = count + p[j];
	}
	if (count <= t)
	result++;


	}

	cout << result << endl;
	delete[]p;*/





	//��������б� ����vector����
	/*    int n,number;

	cin >> n;

	int i = 1;
	ListNode *L = new ListNode;
	ListNode *q;
	L->next = NULL;
	q = L;
	for (i = 1; i <= n; i++)
	{
	cin >> number;
	ListNode *p = new ListNode;

	p->val = number;
	p->next = NULL;
	q->next = p;
	q = p;

	}
	q = L->next;
	vector<int> arraylist1,arraylist2;
	while (q)
	{
	arraylist1.push_back(q->val);
	q = q->next;
	}
	for (vector<int>::const_reverse_iterator iter = arraylist1.rbegin(); iter != arraylist1.rend(); iter++)
	arraylist2.push_back(*iter);
	for (vector<int>::iterator iter = arraylist2.begin(); iter != arraylist2.end(); iter++)
	cout << *iter;*/





	//����ָ�
	/*   int n,number;
	cin >> n;

	int i = 1;
	ListNode *L = new ListNode;
	ListNode *L1 = new ListNode;
	ListNode *q,*p,*t,*m;
	L->next = NULL;
	L1->next = NULL;
	q = L;
	for (i = 1; i <= n; i++)
	{
	cin >> number;
	ListNode *p = new ListNode;

	p->val = number;
	p->next = NULL;
	q->next = p;
	q = p;

	}
	q = L->next;
	p = q->next;
	L1->next = q;
	q->next = NULL;
	t = p;
	while (t)
	{

	p = p->next;
	if (p == NULL)
	{
	if (t->val <= q->val)
	{
	L1->next = t;
	t->next = q;
	q = t;
	}
	else
	{
	m = q;
	q = q->next;
	while (q)
	{
	if (t->val > q->val)
	{
	m = q;
	q = q->next;
	}
	else
	{
	break;
	}

	}
	t->next = q;
	m->next = t;
	}
	break;
	}
	if (t->val <= q->val)
	{
	L1->next = t;
	t->next = q;
	q = t;
	}
	else
	{
	m = q;
	q = q->next;
	while (q)
	{
	if (t->val > q->val)
	{
	m = q;
	q = q->next;
	}
	else
	{
	break;
	}

	}
	t->next = q;
	m->next = t;
	}
	q = L1->next;
	m = q;
	t = p;
	}

	q = L1->next;
	while (q)
	{
	cout << q->val;
	q = q->next;
	}
	cout << endl;*/

	//��Ϊ���  ����һ���򵥴����¼����Сģ�飬�ܹ���¼����Ĵ������ڵ��ļ����ƺ��кš�����1�� ��¼���8�������¼��ѭ����¼������ͬ�Ĵ����¼�����ļ����ƺ��к���ȫƥ�䣩ֻ��¼һ��������������ӣ�2�� ����16���ַ����ļ����ƣ�ֻ��¼�ļ��������Ч16���ַ���3�� ������ļ����ܴ�·������¼�ļ����Ʋ��ܴ�·����

	/*   vector<ErrorRecord> errorrecode;
	string address;
	int linenumber;
	while (cin >> address >> linenumber)
	{

	ErrorRecord errorecodetest;
	vector<ErrorRecord>::iterator iter;
	address = Getfilename(address);
	errorecodetest.address = address;
	errorecodetest. linenumber = linenumber;
	iter = find(errorrecode.begin(), errorrecode.end(), errorecodetest);
	if (iter == errorrecode.end())
	{

	errorrecode.push_back(errorecodetest);

	}
	else
	{
	iter->count++;

	}
	}
	unsigned j = 0;
	if (errorrecode.size()>8)
	{
	j = errorrecode.size() - 8;

	}

	for (; j < errorrecode.size(); j++)
	{
	cout << errorrecode[j].address << " "<< errorrecode[j].linenumber <<" "<< errorrecode[j].count << endl;
	}*/
	//����������
	/*   TreeNode *root;
	CreateTree(&root);
	PreOrder(root);
	cout << endl;
	ReverseTree(&root);
	PreOrder(root);*/
	//evaluate-reverse-polish-notation
	vector<string> expression = { "-3", "9", "*" };

	stack<int> temp;
	vector<string>::iterator iter;
	int result;

	for (iter = expression.begin(); iter != expression.end(); iter++) //��ʹ��for(auto element: expression) elementΪvector�е�ÿ��Ԫ��
	{


		if ((*iter) != "+" && (*iter) != "-" && (*iter) != "*" && (*iter) != "/")
		{
			temp.push(atoi((*iter).c_str()));
			continue;
		}
		else if (*iter == "+")
		{

			FunctionStack(temp, '+');
			continue;
		}
		else if ((*iter) == "-")
		{
			FunctionStack(temp, '-');
			continue;
		}
		else if ((*iter) == "*")
		{
			FunctionStack(temp, '*');
			continue;
		}
		else if ((*iter) == "/")
		{
			FunctionStack(temp, '/');
			continue;
		}



	}
	result = temp.top();
	temp.pop();
	cout << result << endl;



	system("pause");
	return 0;
}

