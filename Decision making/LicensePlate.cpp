#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s.length()==6 && isupper(s[0]) && isupper(s[1]) && isupper(s[2]) && isdigit(s[3]) && isdigit(s[4]) && isdigit(s[5]))
		cout<<"Older style";
	else if(s.length()==7 && isdigit(s[0]) && isdigit(s[1]) && isdigit(s[2]) && isdigit(s[3]) && isupper(s[4]) && isupper(s[5]) && isupper(s[6]))
		cout<<"Newer style";
	else
		cout<<"Not valid";
	return 0;
}
