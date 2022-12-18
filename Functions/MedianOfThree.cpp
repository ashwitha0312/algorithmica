#include<bits/stdc++.h>;
using namespace std;
int max(int num1, int num2, int num3){
	if(num1>num2 && num1>num3)
		return num1;
	else if(num2>num1 && num2>num3)
		return num2;
	else
		return num3;
}
int min(int num1,int num2,int num3){
	if(num1<num2 && num1<num3)
		return num1;
	else if(num2<num1 && num2<num3)
		return num2;
	else
		return num3;
}
int medianOfThree(int num1, int num2, int num3){
	int maximum,minimum;
	maximum=max(num1,num2,num3);
	minimum=min(num1,num2,num3);
	if(num1!=maximum && num1!=minimum)
		return num1;
	else if(num2!=maximum && num2!=minimum)
		return num2;
	else 
		return num3;
}
int main(){
	int num1,num2,num3;
	cout<<"Enter the 3 numbers: ";
	cin>>num1>>num2>>num3;
	cout<<medianOfThree(num1,num2,num3);
	return 0;
}
