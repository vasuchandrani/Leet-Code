// 26/08/2024
// link - https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/?envType=daily-question&envId=2024-08-26

#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:

    vector<int> postorder(Node* root) {

        vector<int> ans;
        if (root == NULL) {
            return ans;
        }        
        
        fun (root, ans);

        return ans;
    }

    void fun (Node* root, vector<int> &ans) {

        // ans.push_back(root -> val);     // if preOrder

        for (int i=0; i<root -> children.size(); i++) {
            fun (root->children[i], ans);
        }

        ans.push_back(root -> val);     // if postOrder
    }
};