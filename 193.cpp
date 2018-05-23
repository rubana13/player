#include <iostream>
#include <math.h>
using namespace std;

int main() {
int a,b,x,y;
cout<<"Enter the value of a,b,x:";
cin>>a>>b>>x;
y=(a*x)+b;
cout<<y;
if(!cin)
{
    cout<<"Invalid input";
}
}
