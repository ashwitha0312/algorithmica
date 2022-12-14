#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<" ";
		}
		for(k=0;k<=n-i-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
