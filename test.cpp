/*
Definition for binary tree
struct TreeNode{
    int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
	};
*/


class Solution{
public:
	vector<int> postorder Traversal(TreeNode* root){
		vector<int> result;
		stack<TreeNode*> tempStack;
		if (NULL == root)
			return result;
		TreeNode * pCur = root;
		tempStack.push(pCur);
		while (!tempStack.empty())
		{
			TreeNode* temp = tempStack.top();
			tempStack.pop();
			result.push_back(temp->val);
			if (temp->left)
				tempStack.push(temp->left);
			if (temp->right)
				tempStack.push(temp->right);
		}
		reverse(result.begin(), resukt.end());
		return result;
	}
};
