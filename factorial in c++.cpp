#include<iostream>

using namespace std;

int main(){

int num,fact=1,i;

cout<<"Enter any number ";

cin>>num;

for(i=1;i<=num;i++)

{

    fact=fact*i;

}

cout<<"\n"<<" The factorial is:"<<fact;
return 0;
}
