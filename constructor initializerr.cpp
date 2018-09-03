#include<iostream>

using namespace std;

class student {

public:

    const int admissionFee,otherFee;

   // const int otherFee;

    int id;

    student(int x,int y,int z)

    : admissionFee(x),otherFee(y)

    {

        cout<<"The admission fee :"<<admissionFee<<endl;


        cout<<"The other fee :"<<otherFee<<endl;

        id=z;
            cout<<"The id :"<<id<<endl;


    }




};


int main(){



student st(16000,550,102);








return 0;


}

