#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cout<<"Enter the wavelength in nanometers: ";
	cin>>x;
	if(x>=380 && x<450)
		cout<<"voilet";
	else if(x>=450 && x<495)
		cout<<"blue";
	else if(x>=495 && x<570)
		cout<<"green";
	else if(x>=570 && x<590)
		cout<<"yellow";
	else if(x>=590 && x<620)
		cout<<"orange";
	else if(x>=620 && x<750)
		cout<<"red";
	else
		cout<<"out of visible spectrum";
	return 0;
}
