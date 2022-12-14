#include<bits/stdc++.h>
using namespace std;
int main(){
	string binary;
	float decimal=0;
	cout<<"Enter a binary number";
	cin>>binary;
	int x, l=binary.length();
	for(int i=0; i<l; i++){
		
		decimal+=x*pow(2,l-i-1);
	}
	cout<<decimal;
	return 0;
}
