#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cout<<"Enter a year: ";
	cin>>x;
	if(x%400 == 0)
		cout<<"Leap year";
	else{
		if(x%4 == 0)
			cout<<"Leap year";
		else
			cout<<"Not a leap year";
	}
	return 0;
}
