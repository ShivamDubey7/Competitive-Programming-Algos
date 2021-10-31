#include<bits/stdc++.h>
using namespace std;
int iterativeGcd(int a,int b){
	while(a!=0){
		int rem = b%a;
		b = a;
		a = rem;
	}
	return b;
}
int recursiveGcd(int a, int b){
	if(a==0)return b;
	return recursiveGcd(b%a,a);
}
int main(){
	int a = 6,b=4;
	cout<<recursiveGcd(a,b);
}
