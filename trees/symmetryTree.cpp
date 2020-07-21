
 
 
 int check(TreeNode* node1 ,TreeNode* node2){
     
  
     if(!node1 && !node2 ){
         return 1 ;
         
     }
     
     else if(node1&& node2){
         return (node1->val == node2->val)&&check(node1->left, node2->right)&&check(node1->right, node2->left) ;
     }
     
     else{
         return 0 ;
     }
     
       
     
     
 }
int Solution::isSymmetric(TreeNode* A) {
     
    if(A){
        
        return check(A->left, A->right) ;
        
    }
    else{
        return 0 ;
    }
}