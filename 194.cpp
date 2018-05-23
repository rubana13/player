#include <iostream>

using namespace std;

int main() {
int x,y;
cout<<"Enter the value for x and y,the values should be Paper=1,Rock=2,Scissor=3:";
cin>>x>>y;
if((x==1)&&(y==2)||(x==2)&&(y==1))
    {
        cout<<"Paper wins";
    }
    else if((x==1)&&(y==3)||(x==3)&&(y==1))
    {
        cout<<"Scissor wins";
    }
     else if((x==2)&&(y==3)||(x==3)&&(y==2))
    {
        cout<<"Rock wins";
    }
    else
    {
        cout<<"Draw";
    }

  
if(!cin)
{
    cout<<"Invalid input";
}
}
