#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}

int main(){
	int t,N,M;
	cin>>t;

	while(t--){

		cin>>N>>M;
		vector<int> arr1;
        for(int i=0; i<N; i++){
			int el;
			cin>>el;
			arr1.push_back(el);
		}

		vector<int> arr2;
		for(int j=0; j<M; j++){
			int el1;
			cin>>el1;
			arr2.push_back(el1);
		}
		vector<int> result;

       result = findArrayIntersection(arr1,N,arr2,M);

       for(int r=0; r<result.size(); r++){
       	cout<<result.at(r);
       }
       cout<<endl;

}
	return 0;
}
