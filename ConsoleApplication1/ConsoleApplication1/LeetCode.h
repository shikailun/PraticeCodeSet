#pragma once
#include <vector>

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

class Solution {
public:
	//binary - tree - postorder - traversal ตÝน้
//	vector<int> postorderTraversal(TreeNode *root);
//	void postorder(vector<int> &result, TreeNode *root);

	void reorderList(ListNode *head);
    
};