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
int main(){	
	ll base = 5;
	ll power = 3;
	cout<<fastExpo(base,power);

}