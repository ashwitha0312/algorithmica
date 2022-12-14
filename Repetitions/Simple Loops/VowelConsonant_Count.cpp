#include<bits/stdc++.h>
using namespace std;
int main(){
	int vowel_count=0, consonant_count=0;
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			vowel_count+=1;
		else
			consonant_count+=1;
	}
	cout<<"No.of vowels: "<<vowel_count<<"\n"<<"No.of consonants: "<<consonant_count;
	return 0;
}
