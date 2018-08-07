#include<iostream>

using namespace std;

class student                                //creating a class
{
public:
int id;                  //class variable or member

double gpa;              //class variable  or member



};


int main(){


student munna;           //here munna is an object           //creating object inside of the main file(body)

                              //by calling the name of class ,class variables will be automatically declared
munna.id=075;

munna.gpa=3.66;

cout<<"The id of the student is:"<<munna.id<<" \n "<<"The gpa of the student is:"<<munna.gpa<<endl;

student siam;

siam.id=055;

siam.gpa=3.40;

cout<<"The id of the student is :"<<siam.id<<"\n"<<"The gpa of the student is:"<<siam.gpa;
return 0;
}
