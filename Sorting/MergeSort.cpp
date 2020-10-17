#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v, int startIndex, int mid, int endIndex){
	vector<int>temp;
	int i1 = startIndex;
	int i2 = mid+1;
	while(i1<=mid && i2<=endIndex){
		if(v[i1]<=v[i2])
			temp.push_back(v[i1]),i1++;
		else
			temp.push_back(v[i2]),i2++;
	}
	while(i1<=mid)temp.push_back(v[i1]),i1++;
	while(i2<=endIndex)temp.push_back(v[i2]),i2++;
	for(int i=0;i<temp.size();i++)
		v[startIndex+i] = temp[i];
}
void mergeSort(vector<int>&v, int startIndex, int endIndex){
	if(startIndex<endIndex){
		int mid = (startIndex+endIndex)/2;
		mergeSort(v,startIndex,mid);
		mergeSort(v,mid+1,endIndex);
		merge(v,startIndex,mid,endIndex);	
	}
	
}
int main(){
	vector<int>temp = {1,3,2,12,444,5};
	mergeSort(temp,0, temp.size()-1);
	for(int v:temp){
		cout<<v<<" ";
	}
}