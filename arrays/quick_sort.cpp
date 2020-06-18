#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int partition (int *arr, int start, int end){
    int pivot  = end ;
    int pIndex = start;

    for(int i = start ; i < end ; i++){
        if(arr[i] <= arr[pivot]){
           swap (arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[pivot]);
    return pIndex;
}

void quickSort( int *arr, int start, int end){
    int pIndex = partition(arr, start, end);
    if(start < end){
        quickSort(arr , start,pIndex-1);
        quickSort(arr, pIndex +1 , end);

    }

}
int main(){
    int arr[] = { 7,2 ,3 ,39 ,0 , 29} ;
    quickSort(arr,0,5);
    for(int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }

}