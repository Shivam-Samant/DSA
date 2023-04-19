#include<iostream>
#include<vector>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class TreeNode {
    public:
    int val;
    TreeNode *left, *right;
    TreeNode() {
        this->val = 0;
        this->left = nullptr;
        this->right = nullptr;
    }

    TreeNode(int x) {
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    }

    TreeNode(int x, TreeNode *left, TreeNode *right) {
        this->val = x;
        this->left = left;
        this->right = right;
    }
};

class Solution {
public:
    int pathLength = 0;
    void dfs(TreeNode* node, bool goLeft, int steps) {
        if (node == nullptr) {
            return;
        }
        pathLength = max(pathLength, steps);
        if (goLeft) {
            dfs(node->left, false, steps + 1);
            dfs(node->right, true, 1);
        } else {
            dfs(node->left, false, 1);
            dfs(node->right, true, steps + 1);
        }
    }

    int longestZigZag(TreeNode* root) {
        dfs(root, false, 0);
        dfs(root, true, 0);
        return pathLength;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(1);
    root->right = new TreeNode(1);
    root->left->right = new TreeNode(1);
    root->left->right->left = new TreeNode(1);
    root->left->right->right = new TreeNode(1);
    root->left->right->left->right = new TreeNode(1);


    Solution solution;
    cout << solution.longestZigZag(root) << endl;
}