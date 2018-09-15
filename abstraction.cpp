#include<iostream>

using namespace std;

class user{

public :

    virtual void message()= 0 ;


    void call()
    {

        cout<<"Hi there!!"<<endl;

    }

};

class atiya : public user{


void message()
{

    cout<<"hey Munna this is Atiyaa -_-"<<endl;

}


};

class munna : public user{


void message()
{

    cout<<"hey Atiya  this is Munnaaaa  :3 "<<endl;

}


};
int main()
{

user *u;

atiya a;

munna m;

u=&a;

u ->message();

u=&m;

u ->message();

u ->call();


return 0;

}
