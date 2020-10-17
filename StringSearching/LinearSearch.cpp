#include<bits/stdc++.h>
using namespace std;
vector<int> linearSearch(string text, string pattern){
	vector<int>ans;
	for(int i=0;i<text.size();i++){
		bool found = true;
		for(int j=0;j<pattern.size();j++){
			if(pattern[j]!=text[i+j]){
				found = false;
				break;
			}
		}
		if(found)
			ans.push_back(i);
	}
	return ans;
}
int main(){

	string text = "Hey there! this is a text string, within which we wanna search a pattern.  \
	Note that pattern repeats itself, so search for pattern if you wanna see can this report multiple occurrences of pattern.";
	string pattern = "pattern";
	vector<int> indices = linearSearch(text,pattern);
	for(auto i:indices){
		cout<<i<<",";
	}
}