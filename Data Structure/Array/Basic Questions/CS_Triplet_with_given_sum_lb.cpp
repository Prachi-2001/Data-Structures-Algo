#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	long long int sum = 0;
	for(int i=0; i<n; i++){
		vector<int> temp;
		for(int j=i; j<3; j++){
			
			sum = sum + arr[j];
			temp.push_back(arr[j]);
		}
		if(sum==K){
			return temp;
		}
	}
}

int main(){
	int k,n;
	cin>>k>>n;
 	vector<int> arr;
 	for(int i=0;i<n; i++){
 		int el;
 		cin>>el;
 		arr.push_back(el);
 	}
 	findTriplets(arr,n,k);

	return 0;
}