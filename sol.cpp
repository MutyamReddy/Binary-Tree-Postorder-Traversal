class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)return vector<int>{};
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(s1.size()!=0){
            TreeNode* t=s1.top();
            s1.pop();
            s2.push(t);
            if(t->left!=NULL)s1.push(t->left);
            if(t->right!=NULL)s1.push(t->right);
        }
        vector<int> ans;
        while(s2.size()!=0){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};
