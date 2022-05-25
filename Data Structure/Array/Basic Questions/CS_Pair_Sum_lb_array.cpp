/*
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

Input : first line contain n(size of array) along with s(sum of pair)
The second and last line of input contains 'N' space-separated integers, denoting the elements of the input array: ARR[i] where 0 <= i < 'N'.

output format: 
Print 'C' lines, each line contains one pair i.e two space-separated integers, where 'C' denotes the count of pairs having sum equals to given value 'S'.


*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
	vector<vector<int>> ans;
 for(int i=0; i<arr.size(); i++){
 	for(int j=i+1; j<arr.size(); j++){
 		if(arr[i]+arr[j]==s){
 			vector<int > pair;
 			pair.push_back(min(arr[i],arr[j]));
 			pair.push_back(max(arr[i],arr[j]));
 			ans.push_back(pair);
        }
 	}
 }
 sort(ans.begin(),ans.end());
}


int main(){
 int n,s;
 cin>>n>>s;
 vector<int> arr;

 for(int i=0; i<n; i++){
	 int element;
	 cin>>element;
	 arr.push_back(element);
 }
 vector<vector<int>> ans;
 ans = pairSum(arr,s);

  for(int j=0; j<ans.size(); j++){
  	for(int i=0; i<ans[j].size(); i++){
      cout<<ans[j][i];
  	}
  }	
	return 0;
} 

