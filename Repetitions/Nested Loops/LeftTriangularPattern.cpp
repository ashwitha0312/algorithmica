#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , i, j;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=0; i<n; i++){
		for(j=n-1; j<i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}