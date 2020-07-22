int Solution::perfectPeak(vector<int> &A) {
    
    int  n  = A.size() ;
    int arr1[n];
    int arr2[n];
    arr1[0] = A[0];
    arr1[1] = A[0];
    
    for(int i = 2 ; i < n ; i ++){
        arr1[i] = max(arr1[i-1],A[i-1]);
    }
    
    arr2[n-1] = A[n-1];
     arr2[n-2] = A[n-1];
    
    for(int i = 2 ; i < n ; i ++){
        arr2[n-1 - i ] = min(arr2[n - 1 - i + 1 ], A[n - 1 - i + 1]);
    }
    
    for(int i = 1 ; i < n -1; i ++){
        
        if(A[i] > arr1[i] && A[i] < arr2[i]){
            return 1 ;
        }
        
    }
    
    return 0 ;
}
