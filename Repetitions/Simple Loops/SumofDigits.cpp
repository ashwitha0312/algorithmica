#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=0;
	cout<<"Enter an integer: ";
	cin>>n;
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
	cout<<"Sum of the digits of the integer: "<<sum;
	return 0;
}
