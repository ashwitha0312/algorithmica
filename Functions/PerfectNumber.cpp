#include<bits/stdc++.h>
using namespace std;
string isPerfect(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		return "true";
	else
		return "false";
}
int main(){
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<isPerfect(n)<<"\n";
	cout<<"Perfect numbers from 1 to 10000: "<<"\n";
	for(i=1;i<=10000;i++){
		if(isPerfect(i)=="true")
			cout<<i<<"\n";
	}
	return 0;
}
