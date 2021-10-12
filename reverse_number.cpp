#include <iostream>
using namespace std;


void reverseNum(int n){
    while(n>0){
        cout<<n%10;
        n=n/10;
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	reverseNum(n);
	return 0;
}
