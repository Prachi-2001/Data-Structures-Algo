#include<bits/stdc++.h>
using namespace std;
/*
level of question : easy 

question - You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

logic : apply xor to cancel out common element 
how xor cancel out common elemnts 
it has some property a^a = 0
0^a = a

learning : if we want to cancel common element use xor operation 

output : return unique element
*/

 int findUnique(int *arr, int size){
	int ans = 0;
	// performing xor to cancel out common element 
	for(int i=0;i<size;i++){
		ans = ans^arr[i];
	}
	return ans;
}

int main(){
  int t;
  cin>>t;
	while(t--){
  	int arrsize; //size of array
  	cin>>arrsize;
  	int arr[arrsize];
  	for(int i=0;i<arrsize;i++){
  		cin>>arr[i];
  	}
  	cout<<findUnique(arr,arrsize)<<endl;
	}
	return 0;
}