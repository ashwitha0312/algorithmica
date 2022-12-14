#include<bits/stdc++.h>
using namespace std;
int main(){
	float x,a, guess;
	cout<<"Enter a number: ";
	cin>>x;
	guess=x/2;
	a=pow(10,-2);
	while(abs(guess*guess-x)>a){
		guess=(guess+x/guess)/2;
	}
	cout<<guess;
	return 0;
}
