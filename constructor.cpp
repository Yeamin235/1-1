#include<iostream>

using namespace std;

class student
{

public:

    int id;

    double gpa;

   void display()
    {

    cout<<"The id of the student is:"<<id<<"\n"<<"The gpa of the student is:"<<gpa<<endl;


    }



    student(int x,double y)            //paramiterised constructor
    {

        id=x;

        gpa=y;                     //together they are said constructor overloading

    }

    student(){           //default constructor

    cout<<"They are really good student!"<<endl;

    }

};

int main(){




student saif(100,3.7);      //value initialization

saif.display();
student mehrin(102,3.68);   //value initialization


mehrin.display();

student obj;


return 0;
}











