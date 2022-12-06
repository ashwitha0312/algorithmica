#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int i;
	cout<<"Enter the position: ";
	cin>>c>>i;
	if(c=='a' || c=='c' || c=='e' || c=='g'){
		if(i%2 == 1)
			cout<<"square is black";
		else
			cout<<"square is white";
	}
	else{
		if(i%2 == 1)
			cout<<"white";
		else
			cout<<"black";
	}
	return 0;
}
