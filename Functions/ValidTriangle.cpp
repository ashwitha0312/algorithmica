#include<bits/stdc++.h>
using namespace std;
bool isValidTriangle(float a, float b, float c){
	if(a>=b+c || b>=a+c || c>=a+b)
		return false;
	else
		return true;
}
int main(){
	float a,b,c;
	cout<<"Enter the lengths of the sides of the triangle: ";
	cin>>a>>b>>c;
	cout<<isValidTriangle(a,b,c);
	return 0;
}
