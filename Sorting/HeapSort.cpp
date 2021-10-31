#include<bits/stdc++.h>
#define sz(v) ((int)v.size())
using namespace std;
void heapify(vector<int>&v, int SIZE, int ind){
	int left_child = (ind<<1)+1;
	int right_child = left_child+1;
	int to_swap;
	if(left_child<SIZE && v[left_child] > v[ind])
		to_swap = left_child;
	else
		to_swap = ind;
	if(right_child<SIZE && v[right_child] > v[to_swap])
		to_swap = right_child;
	if(to_swap !=ind){
		int temp = v[to_swap];
		v[to_swap] = v[ind];
		v[ind] = temp;
		heapify(v,SIZE,to_swap);
	}
}
void heapSort(vector<int>&v){
	vector<int>heap(sz(v));
	for(int i=(sz(v)-2)/2;i>=0;i--){
		heapify(v,sz(v),i);
	}
	for(int i=sz(v)-1;i>0;i--){
		int temp = v[0];
		v[0] = v[i];
		v[i] = temp;

		heapify(v,i,0);
	}
}
int main(){
	vector<int>temp = {1,3,2,12,444,5};
	heapSort(temp);
	for(int v:temp){
		cout<<v<<" ";
	}
}