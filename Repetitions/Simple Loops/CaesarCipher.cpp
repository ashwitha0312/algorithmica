#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122))
			cout<<char(int(s[i]+3));
		else 
			cout<<s[i];
	}
	return 0;
}
