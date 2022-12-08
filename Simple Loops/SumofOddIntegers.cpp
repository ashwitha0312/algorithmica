#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0,sum=0;
	cout<<"Enter an integer: ";
	cin>>n;
	while(count<n){
		if(n%2 != 0){
			count+=1;
			sum+=n;
		}
	}
	cout<<"Sum of first "<<n<<" odd integers: "<<sum;
	return 0;
}
