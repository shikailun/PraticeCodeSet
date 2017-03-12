#pragma once
#include <vector>
#include <map>
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};
struct RandomListNode {
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
	
};

//class Solution {
//public:
	//binary - tree - postorder - traversal ตÝน้
//	vector<int> postorderTraversal(TreeNode *root);
//	void postorder(vector<int> &result, TreeNode *root);

//	void reorderList(ListNode *head);
//	ListNode * detectCycle(ListNode *head);

//  copy-list-with-random-pointer
//	RandomListNode *copyRandomList(RandomListNode *head);

//  gas-station
//	int canCompleteCircuit(vector<int> &gas, vector<int> &cost);
//};