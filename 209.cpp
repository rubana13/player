#include <iostream>
#include <math.h>
using namespace std;

int main() {
int a,b,c,ans,an;
cin>>a>>b>>c;
if(a,b,c<=1000000000)
{
ans=pow(a,b);
an=ans%c;
cout<<an;
}
else
{
    cout<<"Invalid input";
}
}
