<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1, s2, s3,s;
	cout<<"Enter the lengths of the sides of the triangle";
	cin>>s1>>s2>>s3;
	s=(s1+s2+s3)/2;
	cout<<"Area of the triangle:"<<sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1, s2, s3,s;
	cout<<"Enter the lengths of the sides of the triangle";
	cin>>s1>>s2>>s3;
	s=(s1+s2+s3)/2;
	cout<<"Area of the triangle:"<<pow((s*(s-s1)*(s-s2)*(s-s3)),0.5);
	return 0;
}
>>>>>>> 29f5906ea18f7da7e7f64fdfcceeb0aa256e8912
