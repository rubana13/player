#include <iostream>
using namespace std;

int main(){
	int n,f=1,i;
	cout<<"Enter the number:";
	cin>>n;
	if(n<=20)
	{
	for(i=1;i<=n;++i)
	{
		f*=i;
}
	cout<<f;
	}
	else{
	    cout<<"Input is out of range. Enter number upto 20";
	}
	if(!cin)
	{
		cout<<"Invalid input";
	}

}
