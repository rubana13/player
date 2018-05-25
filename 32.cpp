#include <iostream>
#include <string>
using namespace std;

int main()
{
int a[100],k,n,i,count=0;
cin>>n>>k;
if((n>=1)&&(n<=100000000))
{
for(i=0;i<n;i++)
{
    cin>>a[i];
if(a[i]==k)
    {
        cout<<"YES";
        count++;
    }
}
}
else
{
    cout<<"Invalid input";
    
}
if(count==0)
{
    cout<<"no";
}
}
