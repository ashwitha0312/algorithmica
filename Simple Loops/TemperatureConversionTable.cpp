#include<bits/stdc++.h>
using namespace std;
int main(){
	float celsius, fahrenheit;
	int i;
	cout<<"Celsius\tFahrenheit"<<"\n";
	for(i=0; i<=10; i++){
		celsius=i*10;
		fahrenheit=celsius*9/5+32;
		cout<<celsius<<"\t"<<fahrenheit<<"\n";
	}
	return 0;
}
