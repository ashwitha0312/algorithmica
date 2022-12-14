#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,decimal,rem,binary=0;
	cout<<"Enter a decimal number";
	cin>>decimal;
	for(i=0;decimal!=0;i++){
		rem=decimal%2;
		binary+=rem*pow(10,i);
		decimal=decimal/2;
	}
	cout<<binary;
	return 0;
}
