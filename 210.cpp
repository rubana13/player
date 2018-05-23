#include <iostream>
#include <math.h>
using namespace std;

int main() {
int a,b,c,ans;
cin>>a>>b;
if((a<=5)&&(b<=50))
{
ans=pow(a,b);
cout<<ans;
}
else
{
    cout<<"Invalid input";
}
}
