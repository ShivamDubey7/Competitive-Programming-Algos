#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fastExpo(ll base, ll power){
	if(power==0)
		return 1;
	ll temp = fastExpo(base,power/2);
	if(power&1){
		return temp*temp * base;
	}
	return temp*temp;
}
ll fastExpoIterative(ll base, ll power){
	ll res = 1;
	while(power	>0){
		if(power&1){
			res*=base;
		}
		power/=2;
		base*=base;
	}
	return res;

}
int main(){	
	ll base = 5;
	ll power = 3;
	cout<<fastExpoIterative(base,power);

}