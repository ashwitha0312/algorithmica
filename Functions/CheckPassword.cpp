#include<bits/stdc++.h>
using namespace std;
bool checkPassword(string password){
	int lcount=0,ucount=0,dcount=0;
	for(int i=0; i<password.length(); i++){
		if(isupper(password[i])>0)
			ucount++;
		else if(islower(password[i])>0)
			lcount++;
		else if(isdigit(password[i])>0)
			dcount++;
	}
	if(password.length()>=8 && ucount>=1 && lcount>=1 && dcount>=1)
		return true;
	else
		return false;
}
int main(){
	string password;
	cin>>password;
	cout<<checkPassword(password);
	return 0;
}
