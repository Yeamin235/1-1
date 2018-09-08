#include<iostream>

using namespace std;

class student{

public:

 string name;

    student(string name){

    this -> name=name;         //here we used this keyword... it will be applicable only
                   //when the name of the class variable and the name of the local variable is same.
    }
void display(){

cout<<name<<endl;

}


};

int main(){

student s1("yahoooooooooooo!!!!!!!");

s1.display();

return 0;
}
