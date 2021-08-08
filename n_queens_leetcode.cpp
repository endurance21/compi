class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>  result;
        vector<pair<int, int>> path;
        
        solve(path, 0, 0, result, n); 

        return result;
    }
    
    bool isSafe(int row1, int col1, int row2, int col2){
        
        if( col1 ==  col2 || row1 == row2 || abs(row1-row2) == abs(col1-col2))
            return false ;
        return true ;
    }
    
  void solve(vector<pair<int, int>> path, int row, int col, vector<vector<string>> &result, int n){
        
        for(int i  = 0; i < path.size(); i++){
            if(!isSafe(path[i].first, path[i].second, row, col))
                return ;
        }
        

        
        path.push_back(make_pair(row,col));
      
        if(row == n-1){
                string s ;
         for( int i  = 0 ; i < n ; i++)
            s+="." ;
            
            vector<string> res(n,s) ;
            
               for(int i  = 0; i < path.size(); i++){
                    res[path[i].first][path[i].second] = 'Q' ;
                }
            
            result.push_back(res) ;
            
           return ;
        }
            
        
        for( int i = 0; i < n ; i++){
            solve(path, row+1, i, result, n);
                
        }
     
        
    }
};
