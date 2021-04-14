// link to que - https://leetcode.com/explore/challenge/card/april-leetcoding-challenge-2021/594/week-2-april-8th-april-14th/3706/
class NestedIterator {
    
    vector<int> result;
    
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        
       flatten(nestedList);
 
    }
    void flatten(vector<NestedInteger> vec){
        auto it = vec.begin();
        for( ; it!=vec.end();it++){
            if(it->isInteger()){
                result.push_back(it->getInteger());
            }else{
                flatten(it->getList());
            }
        }
    }
    int next() {
     
        int res =result.front(); 
        result.erase(result.begin());
        return res;
    }
    
    bool hasNext() {
        if(result.size() > 0){
            return true;
        }
        return false;
    }
};
