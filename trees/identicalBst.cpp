/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int check(TreeNode* node1 ,TreeNode* node2){
     
  
     if(!node1 && !node2 ){
         return 1 ;
         
     }
     
     else if(node1&& node2){
         return (node1->val == node2->val)&&check(node1->left, node2->left)&&check(node1->right, node2->right) ;
     }
     
     else{
         return 0 ;
     }
 }
 
 
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    
    return check(A,B);
}
