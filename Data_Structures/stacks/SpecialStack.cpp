#include <bits/stdc++.h>


using namespace std ;


// we are implementing Special Stacks in class ( abstract way ) !

class SpecicalStack{
    public:
    stack <int> s;
    stack <int> as;
    int stackLimit;

    SpecicalStack(int limit){
        stackLimit = limit;
    };
    void push(int x ){

        if(isFull()){
            cout<<"stack overflow";

            abort();
        }else{

            s.push(x);
            if(as.empty()){
                as.push(x);
            }
            else{

                int minm = as.top();
                minm = min(x, minm);
                as.push(minm) ;

            }
        }
      
       
    } ;

    void pop(){

        s.pop();
        as.pop();


    } ;

    bool isEmpty(){
        cout<<"hello";
    };
    
    bool isFull(){

        if(s.size()  == stackLimit)
            return true ;
        else return false;

    };
    
    int getMin(){
        return as.top();
    };
};




int main(){


    SpecicalStack *p = new SpecicalStack(3) ;

    p->push(20);
    p->push(-1);
    p->push(200);
    p->push(0);
    cout<<p->getMin();

   

    

    
}

