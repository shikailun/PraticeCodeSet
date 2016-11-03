// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

struct ListNode {
	int val;
	struct ListNode *next;
	/*        ListNode(int x) :
	val(x), next(NULL) {
	}*/
};



struct ErrorRecord{
	string address;
	int linenumber;
	int count;


	ErrorRecord(){
		count = 1;
	}
	bool operator==(const ErrorRecord &a)
	{
		return (a.address == address) && (a.linenumber == linenumber);
	}
};
struct TreeNode{
	char a;
	TreeNode *left_tree;
	TreeNode *right_tree;
};


// TODO: reference additional headers your program requires here
