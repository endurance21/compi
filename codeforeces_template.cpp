#include<bits/stdc++.h>

#define v(x) vector<x>
#define loop(x,n) for(int x = 0; x < n; ++x)
using namespace std ; 


int main(){


	int t = 1 ;; 
	// cin>>t ;
	while(t--){

		 int n ;
		 cin>>n ;
	 	v(string) vec(n) ;


		loop(i,n){
			cin>>vec[i] ;
		}

		//  cout<<"hello" ;
		 loop(x,n){
			 int count = 0 ;
			 loop(y,x){

					 if(strcmp(vec[y].c_str(),vec[x].c_str()) < 0 ){
						 count++ ;
					 }
			 }

			 cout<<count <<endl ;
		 }
		
	}
	return 0 ;
}

