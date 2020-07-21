int Solution::solve(string A) {
    
    
     if(A == " ")
        return 0 ;
        
        
    int l1 = A.length();
    int l2 = l1 ;
    
    int dp[l1+1][l2+1] ; 
     
     for(int i = 0 ; i < l1 + 1 ; i++ ){
         dp[0][i] =  0 ;
     }
     
     for(int i = 0 ; i < l2 + 1; i++ ){
         dp[i][0] =  0 ;
     }
    
    for(int i = 1 ; i <=l1 ; i++ ){
        for(int j = 1 ; j <=l2 ; j++){
            
           if( A[i-1] == A[l1 - j ] ){
               dp[i][j]  = 1 + dp[i-1][j-1] ;
           }
           else{
               dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
           }
        }
    }
    
    return dp[l1][l2];
    

}
