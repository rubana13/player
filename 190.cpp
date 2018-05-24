#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a,b,c<=100000)
  {
  if((a*a)+(b*b)==(c*c))
  {
       cout<<"It can form triangle";
  }
  else if((a*a)+(c*c)==(b*b))
  {
       cout<<"It can form triangle";
  }
else if((c*c)+(b*b)==(a*a))
  
  {
      cout<<"It can form triangle";
  }
  else
  {
      cout<<"It cannot form triangle";
  }
  }
  else
  {
      cout<<"Invalid input";
  }
}
