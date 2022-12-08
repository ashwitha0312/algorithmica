#include<bits/stdc++.h>
using namespace std;
int main(){
	float amount,balance1,balance2,balance3;
	cout<<"Enter the amount in savings account: ";
	cin>>amount;
	balance1=0.04*amount+amount;
	balance2=0.04*balance1+balance1;
	balance3=0.04*balance2+balance2;
	cout<<"Balance in savings amount after 1 year: "<<balance1<<"\n"<<"Balance in savings amount after 2 years: "<<balance2<<"\n"<<"Balance in savings amount after 3 years: "<<balance3;
	return 0;
}
