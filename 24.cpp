#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int a[10]={1,2,3,4,5,6,7,8,9,0},i,count=0;
char s[10];
int n;
cin>>s[10];
n=strlen(s);
for(i=0;i<n;i++)
{
    if((s[i]>=0)&&(s[i]<=9))
    {
        count=0;
    }
    else
    {
        count=1;
    }
    
}
if(count==0)
{
    cout<<"It is numeric";
}
else
{
    cout<<"It is non-numeric";
}

	return 0;
}
