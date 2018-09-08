#include<iostream>

using namespace std;

class person
{

public:

    void display(){

    cout<<"I am a person. "<<endl;

    }


};         //the method/function name and members must be same and inherited from base class


class student:public person
{

public:

    void display(){

    cout<<"I am a student. "<<endl;

    }

};

    class teacher:public person

{

public:

    void display(){

    cout<<"I am a teacher. "<<endl;

    }
};

int main(){

person p;

p.display();

student s;

s.display();

teacher t;

t.display();

return 0;
}
