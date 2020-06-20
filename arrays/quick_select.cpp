#include<iostream>
#include<algorithm>
using namespace std ;

int partition( int * arr, int start , int end ){
     int pIndex = start ;
     int pivot = end;
     for(int i = start; i < end ; i++){
         if(arr[i] < arr[pivot]){
             swap(arr[i], arr[pIndex]);
             pIndex++;
         }
     }
     swap(arr[pivot], arr[pIndex]);
     return pIndex;

}
void quickSelect(int * arr, int start ,int end ,int k){
    int index = partition(arr, start , end);
    if(index == k)
    return ;
    else if(index > k ){
        quickSelect(arr, start ,index - 1, k );
    }
    else if(index < k ){
        quickSelect(arr, index + 1 , end , k);
    }

}



int main(){
    int t ;
    cin>>t;
    while(t--){
          int N,k ;
    cin>>N;
    int arr[N];

    for(int i = 0 ; i < N ; i++){
        cin>>arr[i];
    }
    cin>>k;
    quickSelect(arr, 0, N-1, k-1);
    cout<<arr[k-1 ]<<endl;
    }
    
}