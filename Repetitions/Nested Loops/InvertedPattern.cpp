#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(k=0;k<2*i-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
