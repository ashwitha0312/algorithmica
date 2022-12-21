#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
	string reverse="";
	for(int i=0;i<s.length();i++){
		char ch=s[s.length()-i-1];
		reverse.append(1,ch);
	}
	if(reverse==s)
		return true;
	else
		return false;
}
int main(){
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	cout<<isPalindrome(s);
	return 0;
}
