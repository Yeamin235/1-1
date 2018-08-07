#include<iostream>

using namespace std;

class student{


public:

    int id;

    double gpa;

   void display()  //method or function declaring

   {

   cout<<"The id of the student is:"<<id<<" \n "<<"The gpa of the student is:"<<gpa<<endl;

   }

};


int main(){

student saif,sowad;

saif.id=71;

saif.gpa=3.70;

saif.display();

sowad.id=74;

sowad.gpa=3.12;

sowad.display();



return 0;
}





