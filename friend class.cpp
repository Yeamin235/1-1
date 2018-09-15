#include<iostream>

using namespace std;

class A
{

    private:

    int id=75;

    string name="Munna";

    public:

        friend class B;
};

class B{

public:

    void display(A ob)
    {

        cout<< ob.name<<"   "<<ob.id<<endl;

    }



};

int main()
{

   A ob1;

   B ob2;

   ob2.display(ob1);



    return 0;

}
