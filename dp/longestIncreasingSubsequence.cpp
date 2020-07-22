int Solution::lis(const vector<int> &A) {
    
    int n = A.size() ;
   int dp[n];
   
   for(int i = 0 ; i <n; i++ ){
       dp[i] = 1 ;
       for(int j  = 0; j < i ; j++){
           
           if(A[i] > A[j]){
               dp[i] = max(dp[j] + 1 , dp[i] );  
           }
           
           
       }
   }
   int maxm = dp[0];
   
   for(int i = 0 ; i < n ; i ++){
      maxm = max(maxm, dp[i]);
   }
   
   return maxm ;
    
    
    
    
}