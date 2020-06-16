#include<iostream>
#include<math.h> 
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];

    for(int i = 0 ; i < N ; i++){
        cin>>arr[i];
    }
    int i = 0 , currSum = 0 ,maxSum = 0; 
    cout<<maxSum<<endl;
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
    return 0;
}