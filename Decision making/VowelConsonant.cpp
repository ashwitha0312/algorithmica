#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	cout<<"Enter an alphabet: ";
	cin>>x;
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
		cout<<x<<" is a vowel.";
	else
		cout<<x<<" is a consonant.";
	return 0;
}
