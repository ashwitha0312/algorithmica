#include<bits/stdc++.h>
using namespace std;
int nextPrime(int n){
	n+=1;
	for(int i=2;i<n;i++){
		if(n%i==0)
			n++;
	}
	return n;
	
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<nextPrime(n);
	return 0;
}
