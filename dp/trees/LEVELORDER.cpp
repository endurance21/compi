vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> > result ;
    
    if( A == NULL )
        return  result ;
    
    queue<pair <TreeNode* , int>> que;
    que.push({A,1 });
 
    while(!que.empty()){
            pair< TreeNode *, int> * currentNode = &que.front();
            
            if(result.size() < currentNode->second)
                result.push_back(vector<int>());
        result[currentNode->second -1 ].push_back(currentNode->first->val) ;
        
        if( currentNode->first->left != NULL)
            que.push({currentNode->first->left , currentNode->second + 1 }) ;
        
        if( currentNode->first->right != NULL)
            que.push({currentNode->first->right , currentNode->second + 1 }) ;
        
        
        que.pop();
        
    }
    return result ;
}