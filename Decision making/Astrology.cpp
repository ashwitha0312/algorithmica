#include<bits/stdc++.h>
using namespace std;
int main(){
	string m;
	int d;
	cout<<"Enter your month and date of birth: ";
	cin>>m>>d;
	if((m=="December" && d>=22 && d<=31) || (m=="January" && d>=1 && d<=19))
		cout<<"Capricon";
	else if((m=="January" && d>=20 && d<=31) || (m=="February" && d>=1 && d<=18))
		cout<<"Aquarius";
	else if((m=="February" && d>=19 && d<=29) || (m=="March" && d>=1 && d<=20))
		cout<<"Pisces";
	else if((m=="March" && d>=21 && d<=31) || (m=="April" && d>=1 && d<=19))
		cout<<"Aries";
	else if((m=="April" && d>=20 && d<=30) || (m=="May" && d>=1 && d<=20))
		cout<<"Taurus";
	else if((m=="May" && d>=21 && d<=31) || (m=="June" && d>=1 && d<=20))
		cout<<"Gemini";
	else if((m=="June" && d>=21 && d<=30) || (m=="July" && d>=1 && d<=22))
		cout<<"Cancer";
	else if((m=="July" && d>=20 && d<=31) || (m=="August" && d>=1 && d<=22))
		cout<<"Leo";
	else if((m=="August" && d>=23 && d<=31) || (m=="September" && d>=1 && d<=22))
		cout<<"Virgo";
	else if((m=="September" && d>=23 && d<=30) || (m=="October" && d>=1 && d<=22))
		cout<<"Libra";
	else if((m=="October" && d>=23 && d<=30) || (m=="November" && d>=1 && d<=21))
		cout<<"Scorpio";
	else
		cout<<"Sagittarius";
	return 0;
}
