#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
	string rev=s;
	reverse(rev.begin(),rev.end());
	if(rev==s)
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
