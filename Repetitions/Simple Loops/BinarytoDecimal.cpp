#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,binary,rem;
	float decimal=0;
	cout<<"Enter a binary number";
	cin>>binary;
	for(i=0;binary!=0;i++){
		rem=binary%10;
		decimal+=rem*pow(2,i);
		binary=binary/10;
	}
	cout<<decimal;
	return 0;
}
