#include<bits/stdc++.h>
using namespace std;
string isCollinear(int x1, int y1, int x2, int y2, int x3, int y3){
	float m,n;
	m=float(y2-y1)/(x2-x1);
	n=float(y3-y2)/(x3-x2);
	
	if(m==n)
		return "true";
	else
		return "false";
}
int main(){
	int x1,y1,x2,y2,x3,y3;
	cout<<"Enter the 3 points: ";
	cin>>x1,y1,x2,y2,x3,y3;
	cout<<isCollinear(x1,y1,x2,y2,x3,y3);
	return 0;
}
