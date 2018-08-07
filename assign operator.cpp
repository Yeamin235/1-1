#include<iostream>

using namespace std;

int main(){

int x,y;

cout<<"Give the value for x:";

cin>>x;

cout<<"Give the value for y:";

cin>>y;



x+=y;     //x=x+y

cout<<"Here's the solution"<<"\n"<<x<<endl;


x-=y;   //x=x-y  [previous value of x will be assigned here..]

cout<<"Here's the solution"<<"\n"<<x<<endl;


x*=y;  //x=x*y        [previous value of x will be assigned here..]

cout<<"Here's the solution"<<"\n"<<x<<endl;

x/=y;      //x=x/y      [previous value of x will be assigned here..]

cout<<"Here's the solution"<<"\n"<<x<<endl;

x%=y;       //x=x%y        [previous value of x will be assigned here..]

cout<<"Here's the solution"<<"\n"<<x<<endl;

return 0;
}















