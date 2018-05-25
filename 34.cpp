#include <iostream>
#include <string>
using namespace std;

int main()
{
string s;
int n,i;
cin>>s;
n=s.length();

for(i=0;i<=n;i=i+3)
{
cout<<s[i];
}
}
