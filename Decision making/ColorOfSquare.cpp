#include<bits/stdc++.h>
using namespace std;
int main(){
	string pos;
	char c;
	int r;
	cout<<"Enter the position: ";
	cin>>pos;
	c=pos[0];
	r=pos[1];
	if(c=='a' || c=='c' || c=='e' || c=='g'){
		if(r%2 == 1)
			cout<<"square is black";
		else
			cout<<"square is white";
	}
	else{
		if(r%2 == 1)
			cout<<"white";
		else
			cout<<"black";
	}
	return 0;
}
