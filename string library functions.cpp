#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main(){

    char name1[50],name2[100],name3[80];

    cout<<"input your required characters for name1:"<<endl;
    gets(name1);

    strupr(name1);
    int x=strlen(name1);

    cout<<"string length is :"<<x<<endl;


strcpy(name2,name1);

cout<<"copying name1 to name2 "<<name2<<endl<<"input your required characters for name3 :"<<endl;

gets(name3);
strlwr(name3);
strcat(name1,name3);

cout<<name1<<endl;



return 0;
}
