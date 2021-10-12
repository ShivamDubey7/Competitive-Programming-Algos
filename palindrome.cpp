#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,sum=0;
	cin>>n;
	int temp=n;
	while(n>0){
	    sum=(sum*10)+n%10;
	    n=n/10;
	}
	if (sum==temp)
	cout<<temp<<" is a Palindrome Number";
	else
	cout<<temp<<" is not a Palindrome";
	return 0;
}
