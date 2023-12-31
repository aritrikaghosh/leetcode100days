#include<bits/stdc++.h>
using namespace std;
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        else if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)){
            return false;

        }

        else if(p->val==q->val){
            bool left=isSameTree(p->left,q->left);
            bool right=isSameTree(p->right,q->right);
            if(left==true && right==true){
                return true;
            }
            else{
                return false;
            }
            
        }
        return false;
    }
};