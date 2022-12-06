#include<bits/stdc++.h>
using namespace std;
int main(){
	string m;
	cout<<"Enter a month: ";
	cin>>m;
	if(m=="February")
		cout<<"28 or 29 days";
	else if(m=="January" || m=="March" || m=="May" || m=="July" || m=="August" || m=="October" || m=="December")
		cout<<"31 days";
	else
		cout<<"30 days";
	return 0;
}
