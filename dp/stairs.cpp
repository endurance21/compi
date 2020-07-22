int climb(int A){
    if(A==0)
        return  1 ;
    if(A==-1)
        return 0 ;
    
    int left = climb(A-1) ;
    int right = climb(A-2);
    return left + right ;
}
int Solution::climbStairs(int A) {
    
    return climb(A);
    
}
