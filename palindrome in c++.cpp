#include<iostream>

using namespace std;

int main()
{
    int num,r,sum=0,temp;

    cout<<" Enter the number :"<<endl;

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




    return 0;
}
