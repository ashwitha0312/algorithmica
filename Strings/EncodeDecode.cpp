#include<bits/stdc++.h>
using namespace std;
int decode(char ch){
	return int(ch);
}
char encode(int asciicode){
	return char(asciicode);
}
int main(){
	char ch;
	int asciicode;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<decode(ch)<<"\n";
	cout<<"Enter ASCII code value: ";
	cin>>asciicode;
	cout<<encode(asciicode);
	return 0;
}
