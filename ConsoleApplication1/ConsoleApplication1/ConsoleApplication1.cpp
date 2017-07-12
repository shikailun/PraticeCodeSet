// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

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
#include "pointToOffer.h"
#include <unordered_map>


using namespace std;






bool validWordAbbreviation(string word, string abbr) {
	// code here
	if (word.size() == 0 || abbr.size() == 0)
		return false;
	int j = 0, k = 0;
	int i;
	for ( i = 0; i < abbr.size(); i++)
	{


		if (abbr[i] < 122 && abbr[i] > 61)
		{
			if (word[j] == abbr[i])
			{
				j++;
				continue;
			}
			else
			{
				return false;
			}

		}
		else
		{
			k = abbr[i]-'0';
			if ((k + j) >= word.size() && j!= 0)
			{
				return false;
			}
			else if (k == word.size() && j == 0 && abbr.size() == 1)
			{
				return true;
			}
			else
			{
				j = j + k;
			}

		}


	}
	if (i >= abbr.size() && j >= word.size())
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

struct ErrorRecord {
	string address;
	int linenumber;
	int count;


	ErrorRecord() {
		count = 1;
	}
	bool operator==(const ErrorRecord &a)
	{
		return (a.address == address) && (a.linenumber == linenumber);
	}
};




//单链表归并排序
/*ListNode *mergeList(ListNode *l1, ListNode * l2)
{
	ListNode *head = new ListNode(0),*r;
	r = head;
	while (l1&&l2)
	{
		if (l1->val <= l2->val)
		{
			r->next = l1;
			l1 = l1->next;
			
		}
		else
		{
			r->next = l2;
			l2 = l2->next;
		}
		r = r->next;
	}
	if (l1 != NULL)
		r->next = l1;
	else
	{
		r->next = l2;
	}
	return head->next;
}
ListNode *sortList(ListNode *head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	ListNode *slow = head;
	ListNode *fast = head->next;


	while (fast && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	ListNode *headb = slow->next;
	slow->next = NULL;
	return mergeList(sortList(head),sortList(headb));
}*/



// 华为编程  开发一个简单错误记录功能小模块 抽取路径中的文件名称
/*string Getfilename(string filename)
{
	string address;
	address = filename.substr(filename.find_last_of('\\') + 1, filename.length() - filename.find_last_of('\\'));

	if (address.length() > 16)
	{
		return address.substr(address.length() - 16, 16);

	}
	return address;


}*/


//先序遍历二叉树
/*void PreOrder(TreeNode *t)
{
	if (t != NULL)
	{
		cout << t->a;
		PreOrder(t->left_tree);
		PreOrder(t->right_tree);
	}

}*/

//evaluate-reverse-polish-notation
/*int evalRPN(vector<string> &tokens)
{
        stack<int> numbers;
        for(auto token : tokens)
        {
            if(token == "+" || token == "-" || token == "*" || token == "/")
             {
                int a,b,res;
                b=numbers.top();numbers.pop();
                a=numbers.top();numbers.pop();
                if(token == "+")
                    res=a+b;
                else if(token == "-")
                    res=a-b;
                else if(token == "*")
                    res=a*b;
                else
                    res=a/b;
                numbers.push(res);
             }
            else
            {
                stringstream ss;
                ss<<token;
                int temp;
                ss>>temp;
                numbers.push(temp);
            }
        }
        return numbers.top();
}*/

//寻找coder
/*bool compare(const pair<string, int> &t1, const pair<string, int> &t2)
{
	return t1.second > t2.second;
}
bool JudgeCoder(string &s1)
{
	bool flag = false;
	int i = 0;
	if (s1.size() == 0)
	{
		return false;
	}
	for (; i < 5; i++)
	{ 
		if (s1[i] == '\0')
			return flag;
		switch (i)
		{
		case 0:
			if (s1[i] != 'c' && s1[i] != 'C')
			{
				return flag;
			}
			break;
		case 1:
			if (s1[i] != 'o' && s1[i] != 'O')
			{
				return flag;
			}
			break;
		case 2:
			if (s1[i] != 'd' && s1[i] != 'D')
			{
				return flag;
			}
			break;
		case 3:
			if (s1[i] != 'e' && s1[i] != 'E')
			{
				return flag;
			}
			break;
		case 4:
			if (s1[i] != 'r' && s1[i] != 'R')
			{
				return flag;
			}
			break;
		default:
			break;
		}

	}
	i++;
	if (s1[i]== '\0')
	{
		flag = true;
		return flag;
	}
	return flag;

}
int FindSubstringCoder(string& s)
{
	int count = 0;
	string s1 = "coder";
	int pos = -5;
    
	while ((pos = s.find(s1,pos+5)) != string::npos)
	{
		count++;

	}
	return count;
}

vector<string> findCoder(vector<string> A, int n) {
	vector<pair<string, int> >CoderCount;
	vector<string> result;
	int count = 0;
	if (A.size() == 0 || n == 0 )
	{
		return result;
	}

	for (int  i = 0; i < n; i++)
	{
		count = FindSubstringCoder(A[i]);
		if (count != 0)
		{
			CoderCount.push_back(make_pair(A[i], count));
		}
		
	}
	stable_sort(CoderCount.begin(),CoderCount.end(),compare);
	vector<pair<string, int> >::iterator iter;
	for (iter = CoderCount.begin(); iter !=  CoderCount.end(); iter++)
	{
		result.push_back((*iter).first);
	}
	return result;
}*/
int main()
{
	//十六进制转换为十进制
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

	//vector多维数组遍历
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


	//字符串中空格替换

	/*	string s,t;
	int n,j = 0;*/
	//	t[0] = 'r';注意这样赋值不能输出
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
	// t[j+2] = '0'; 这样赋值不对，但不知道为什么，因为t没有初始化？或者用push_back
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

	//输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数 此题可利用数组来记录是否重复 

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


	//反转句子
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


	//2016校招百度 C市现在要转移一批罪犯到D市，C市有n名罪犯，按照入狱时间有顺序，另外每个罪犯有一个罪行值，值越大罪越重。现在为了方便管理，市长决定转移入狱时间连续的c名犯人，同时要求转移犯人的罪行值之和不超过t，问有多少种选择的方式？ 第一行数据三个整数:n，t，c(1≤n≤2e5,0≤t≤1e9,1≤c≤n)，第二行按入狱时间给出每个犯人的罪行值ai(0≤ai≤1e9)  
	//输入例子:
	//3 100 2
	//1 2 3

	//输出例子:
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





	//反向输出列表 返回vector数组
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





	//链表分割
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

	//华为编程  开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。处理：1、 记录最多8条错误记录，循环记录，对相同的错误记录（净文件名称和行号完全匹配）只记录一条，错误计数增加；2、 超过16个字符的文件名称，只记录文件的最后有效16个字符；3、 输入的文件可能带路径，记录文件名称不能带路径。

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
	
	//evaluate-reverse-polish-notation
/*	vector<string> expression = { "-3", "9", "*" };

	stack<int> temp;
	vector<string>::iterator iter;
	int result;

	for (iter = expression.begin(); iter != expression.end(); iter++) //可使用for(auto element: expression) element为vector中的每个元素
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
	cout << result << endl;*/
    
    //letcode Sort a linked list in O(n log n) time using constant space complexity. 单链表归并排序
/*    int n;
	cin >> n;
	int *p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	ListNode *head = new ListNode(p[0]);
	ListNode *q, *r;
	q = head;
	for (int i = 1; i < n; i++)
	{
		r = new ListNode(p[i]);
		q->next = r;
		q = r;
	}
	Solution s;
	s.reorderList(head);
//	q = sortList(head);
	q = head;
	while (q)
	{
		cout << q->val;
		q = q->next;

	}*/
   //寻找coder
 /* vector<string> A,B;
  string s;
  while (getline(cin,s))
  {
	  s.push_back('\0');
	  A.push_back(s);
  }

  B = findCoder(A,A.size());
  for (vector<string>::iterator iter = B.begin(); iter != B.end(); iter++)
  {
	  cout << *iter << ",";
  }*/
/*	vector<int> p;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		p.push_back(a);
	}
	Solution s;
	int result = s.candy(p);
	cout << result;*/
    
/*string s, abbr;
cin >> s >> abbr;
cout << boolalpha << validWordAbbreviation(s, abbr) << endl;*/

	system("pause");
	return 0;
}

