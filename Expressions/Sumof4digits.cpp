#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a 4-digit number: ";
	cin>>n;
	int units=n%10;
	n=n/10;
	int tens=n%10;
	n=n/10;
	int hundreds=n%10;
	n=n/10;
	int thousands=n%10;
	int sum=units+hundreds+tens+thousands;
	cout<<sum;
	return 0;
}
