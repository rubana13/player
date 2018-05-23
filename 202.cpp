#include <iostream>
#include <string.h>
using namespace std;

int main() {
char str[100],i;
cout<<"Enter the string:";
cin>>str;
for(i=0;str[i]!='\0';++i)
{
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
cout<<str[i];
}
}


for(i=0;str[i]!='\0';i++)
{
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
{
break;
}
else  {
    cout<<str[i];
}

}
if(!cin)
{
    cout<<"Invalid input";
}
}
