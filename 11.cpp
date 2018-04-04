#include <iostream>
#include <string>
using namespace std;

int main() {
char str[100];
int i;
cout<<"Enter a day"<<endl;
cin>>str;
if(str=='sunday')//,'saturday','Sunday','Saturday','SUNDAY','SATURDAY')
{
    cout<<"Holiday";
}
else
{
    cout<<"It is a working day";
}
if(!cin)
{
    cout<<"Invalid input";
}
}
