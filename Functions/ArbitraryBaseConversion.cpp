#include<bits/stdc++.h>
using namespace std;
int toDecimal(int num, int initialBase){
	int decimalnum=0;
	for(int i=0;num!=0;i++){
		int rem=num%10;
		decimalnum+=rem*pow(initialBase,i);
		num=num/10;
	}
	return decimalnum;
}
int toFinal(int decimalnum,int finalBase){
	int finalnum=0;
	for(int i=0;decimalnum!=0;i++){
		int rem=decimalnum%finalBase;
		finalnum+=rem*pow(10,i);
		decimalnum=decimalnum/finalBase;
	}
	return finalnum;
}
int convertBase(int num, int initialBase, int finalBase){
	int decimalnum=toDecimal(num, initialBase);
	int finalnum=toFinal(decimalnum, finalBase);
	return finalnum;
}
int main(){
	int num,initialBase,finalBase;
	cout<<"Enter number with its base: ";
	cin>>num>>initialBase;
	cout<<"Enter the base to be converted: ";
	cin>>finalBase;
	if(finalBase>=2 && finalBase<=16)
		cout<<convertBase(num,initialBase,finalBase);
	else
		cout<<"Error";
	return 0;
}
