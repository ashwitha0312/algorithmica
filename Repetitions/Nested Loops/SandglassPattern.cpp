#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, i, j, s;
   cin>>n;
   for(i=n;i>=1;i--)
   {
      for(s=1;s<=n-i;s++)
      {
         cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
         cout<<"* ";
      }
      cout<<"\n";
  }
  for(i=1;i<=n;i++)
   {
      for(s=1;s<=n-i;s++)
      {
         cout <<" ";
      }
      for(j=1;j<=i;j++)
      {
         cout<<"* ";
      }
      cout<<"\n";
  }
  return 0;
}

