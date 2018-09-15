#include<iostream>

using namespace std;

class number{

private:

    int num,count=0,i;

public:

     virtual void process(){

    cout<<"Enter your number: "<<endl;

    cin>>num;

    for(i=2;i<num;i++)

    {
        if(num%i==0)

       {

        count++;

        break;
       }
    }
    if(count==0)

        cout<<num<<" is prime "<<endl;

    else
    cout<<num<<" is not prime "<<endl;



    }


 void display()

 {

     cout<<" The process is done perfectly!"<<endl;

 }



};

class prime : public number{


void process(){


cout<<" Its working!! ";

}


};

int main(){

number m;

m.process();

m.display();

 number *n;

 prime p;

 n=&p;
 n -> process();

n -> display();



return 0;

}

