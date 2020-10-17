#include<bits/stdc++.h>
using namespace std;
void linearSort(vector<int>&v){
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[j]<v[i]){
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
		
	}
}
int main(){
	vector<int>temp = {1,3,2,12,444,5};
	linearSort(temp);
	for(int v:temp){
		cout<<v<<" ";
	}
}