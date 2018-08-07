#include<iostream>

using namespace std;

class student
{

public:

    int id;

    double gpa;

void dispaly()
{

    cout<<"The id of this student is:"<<id <<"\n"<<"The gpa of the student is:"<<gpa<<endl;

}

void setvalues(int x,double y)

{

    id=x;
    gpa=y;



}

};

int main(){

student alif,abir;

alif.setvalues(100,3.55);

alif.dispaly();

abir.setvalues(102,3.22);

abir.dispaly();


return 0;
}
