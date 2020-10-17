#include<bits/stdc++.h>
using namespace std;
//Create a predicate to return T/F for an ind
bool predicate(vector<int>&v, int ind, int search_token){
	return v[ind] >= search_token;
}
int binarySeach(vector<int>&v, int search_token){
	int low = 0,high = v.size(),mid;
	while(low<high){
		mid = (low+high)/2;
		if(predicate(v,mid,search_token)){
			high = mid;
		}
		else
			low = mid+1;
	}
	if(v[low]==search_token) return low;
	return -1;
}
int main(){
	vector<int> v = {1,2,4,5,11,20,25};
	cout<<binarySeach(v,11);
	return 0;
}