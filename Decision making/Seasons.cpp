#include<bits/stdc++.h>
using namespace std;
int main(){
	int d;
	string m;
	cin>>m>>d;
	if((m=="March" && d>=20) || (m=="June" && d<=20) || m=="May" || m=="April")
		cout<<"Spring";
	else if((m=="June" && d>=21) || (m=="September" && d<=21) || m=="July" || m=="August")
		cout<<"Summer";
	else if((m=="September" && d>=22) || (m=="December" && d<=21) || m=="October" || m=="November")
		cout<<"Fall";
	else
		cout<<"Winter";
	return 0;
}
