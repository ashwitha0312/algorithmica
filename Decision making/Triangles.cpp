#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a, b, c;
	cout<<"Enter the sides of the triangle: ";
	cin>>a>>b>>c;
	if(a==b && b==c)
		cout<<"Equilateral";
	else if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b))
		cout<<"Isosceles";
	else
		cout<<"Scalene";
	return 0;
}
