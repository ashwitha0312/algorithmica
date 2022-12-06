#include<bits/stdc++.h>
using namespace std;
int main(){
	float x, tip, tax;
	cout<<"Enter the cost of the metal: ";
	cin>>x;
	tip=0.05*x;
	tax=0.18*x;
	cout<<x+tip+tax;
	return 0;
}
