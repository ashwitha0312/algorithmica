#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	cout<<"\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n";
	for(i=1;i<=10;i++){
		cout<<i<<"\t";
		for(j=1;j<=10;j++){
			cout<<i*j<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
