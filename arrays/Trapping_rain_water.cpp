#include<iostream>
#include<cmath>

using namespace std ;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, waterStored = 0 ;
        cin>>N;
        int arr[N];
        for(int i = 0 ; i < N ; i++)
        cin>>arr[i];
        int leftMax[N];
        leftMax[1] = arr[0];
        for(int i = 2 ; i < N ; i++)
        leftMax[i] = max(arr[i-1], leftMax[i-1]);

        int rightMax[N];
        rightMax[N-2] = arr[N-1];
        
        for(int i = N-3 ; i >=0  ; i--)
        rightMax[i] = max(arr[i+1], rightMax[i+1]);


        
        for(int i = 1 ; i < N-1   ; i++){

            int height = min( rightMax[i], leftMax[i]);
            int delta = ( height - arr[i] ) ;  

            if(delta  > 0 ){
                waterStored+=delta;
            }
        }
        

        cout<<waterStored<<endl;
        
    }
}


//time took : 0.39s 