#include<bits/stdc++.h>
using namespace std;
float getHypotenuse(float a,float b){
		return sqrt(pow(a,2)+pow(b,2));
}
int main(){
	float a,b,x;
	cout<<"Enter the lengths of two short sides of a right-angled triangle: ";
	cin>>a>>b;
	x=getHypotenuse(a,b);
	cout<<x;
	return 0;
}
