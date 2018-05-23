#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  int n=s.length();
  if(n<=100000)
  {
  cout<<s<<" "<<"Answer";
  }
else
{
    cout<<"Invalid input";
}
}
