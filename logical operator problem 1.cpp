#include<iostream>

using namespace std;

int main()
{

    char ch;

    cout<<"Enter any letter to check whether the letter is vowel or consonant "<<endl;

    cin>>ch;

    ch=tolower(ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

    {
        cout<<" Its a vowel........ "<<endl;

    }

    else{

        cout<<"Its a consonant....... "<<endl;
    }






    return 0;
}



















