#include<iostream>

using namespace std;

class number{

private:

    int num,temp,r,sum=0;

public:

    virtual void procedure()
    {

        cout<<" Give your needed number to check :"<<endl;

        cin>>num;

        temp=num;

        while(temp!=0)

        {

            r=temp%10;

            sum=sum*10+r;

            temp=temp/10;

        }
        if(num==sum)

            cout<<num<<" is a palindrome "<<endl;

        else

            cout<<num<<" is not a palindrome "<<endl;




    }

   virtual void show()

    {

        cout<<" It is the inner part of the procedure function."<<endl;

    }


};

class palindrome : public number{


void procedure(){


cout<<" Its inside of palindrome class "<<endl;

}

void show(){


cout<<" Its working!!!"<<endl;
}

};

int main(){

number m;

palindrome q;

m.procedure();

m.show();

number *n;

palindrome p;

n=&p;

n -> procedure();

n -> show();




return 0;

}

