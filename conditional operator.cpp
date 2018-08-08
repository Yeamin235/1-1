#include<iostream>

using namespace std;

int main()

{


    int num1,num2,max,num;


cout<<"GIve 2 numbers:";

cin>>num1>>num2;




    max=(num1>num2) ? num1 : num2;                // here "?" works as if and if it is true then num1 will be max, ":" it works as else... so if it is false then num2 will be max

    cout<<"The large number is:"<<max<<endl;


 cout<<"Enter any number:";

 cin>>num;

 (num%2==0) ? cout<< num <<" is even " : cout<<num <<" is odd ";




    return 0;
}











