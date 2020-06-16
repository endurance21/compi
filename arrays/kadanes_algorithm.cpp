#include<iostream>
#include<cmath> 
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N ,i = 0 , currSum = 0 ,maxSum = 0; 

        cin>>N;
        int arr[N];

        for(int i = 0 ; i < N ; i++){
            cin>>arr[i];
        }
        while(i < N ){

            if( currSum <= 0 ){
                currSum = arr[i];
                maxSum = max(maxSum,currSum);
            
            }
            else if( currSum > 0){
                currSum+= arr[i];
                maxSum = max(maxSum,currSum);
            }
        
            i++;
        }

        cout<<maxSum;

    }
    return 0;
}