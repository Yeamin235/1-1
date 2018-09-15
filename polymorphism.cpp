#include<iostream>

using namespace std;

class person{

public:

   virtual void display() // we used virtual keyword to access every derived or subclass's statements to base or super class
    {
        cout<<"I am a person"<<endl;
    }


};

class student:public person{

public:

    void display()
    {
        cout<<"I am a student"<<endl;
    }

};

class teacher : public student{

public:

    void display()
    {
        cout<<"I am teacher"<<endl;
    }



};

int main(){

person p;

student s;

teacher t;

person *m;  //object declaration using pointer

m=&s;
m -> display();  // we used selection operator

m=&t;

m -> display();

p.display();

s.display();

t.display();

return 0;

}
