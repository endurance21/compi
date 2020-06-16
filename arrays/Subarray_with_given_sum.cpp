#include<iostream>
using namespace std ;

void solve(){

   
}
int main(){
    int T ;
    cin>>T;
    while(T--){
    int N,Sum;
    int arr[N];
    int l = 0 ;
    int r = 0 ;
    int  currSum ;
    bool found = false;


    cin>>N>>Sum;

    for(int i = 0 ; i < N ; i++){
        cin>>arr[i];
    }

    currSum  = arr[l];
    
   
    while(l<=N && r<=N){ 

        if(currSum > Sum){
            currSum-=arr[l];
            l++;
        }
        else if(currSum < Sum){
            r++;
            currSum+=arr[r];

        }
        else{

            found = true;
            cout<< l+1 << " " << r+1 ;
            break;
        } 

    } 
        if(!found){
            cout<<-1;
        }
    }



}
