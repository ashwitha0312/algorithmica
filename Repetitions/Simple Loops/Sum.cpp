#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=0;
	cout<<"Enter a number ";
	cin>>n;
	for(int i=0; i<=n; i++){
		sum+=i;
	}
	cout<<"Sum of first "<<n<<" integers: "<<sum;
	return 0;
}
