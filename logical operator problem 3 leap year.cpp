#include<iostream>

using namespace std;

int main()
{

    int year;

    cout<<"Enter a value for year: "<<endl;

    cin>>year;

    if(year%4==0&&year%100!=0)
    {


        cout<<"The year is "<<year<< " leap year"<<endl;

    }

    else if(year%400==0)

    {


        cout<<"The year "<<year<< " is leap year"<<endl;


    }

    else {

        cout<<"The year "<<year<< " you inputed is not a leap year"<<endl;

    }

    return 0;


}
