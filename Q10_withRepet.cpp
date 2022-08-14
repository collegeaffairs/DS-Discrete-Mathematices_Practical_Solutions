/*
Write a program that generates all the permutations of a given set of digits with repetition.
*/
#include <iostream>

using namespace std;

//q 10 permutation with repetition


	void pamrep(int A[],int B[],int n, int b){
		
		if(b==n){
			for(int j=0;j<n;++j){
				cout<<B[j];
			}
			cout<<endl;
		}
		
		else{
			for(int i=0;i<n;i++){
				B[b]=A[i];
		    	pamrep(A,B,n,b+1);
				
			}
			
		}
		
	}
int main() {	
	int n;
	  
	cout<<"enter the size of array : ";
	cin>>n;
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;++i){
		cout<<"enter  "<<i+1<<" element = :";
		cin>>arr[i];
	}

	int b=0;
	
	cout<<"RESULT : "<<endl;
	
   	pamrep(arr,arr1,n,b);  
	return 0;
}
