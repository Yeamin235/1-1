#include<iostream>

using namespace std;

int main()
{


    int num,count=0,i;

    cout<<"Enter the number:"<<endl;

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

        cout<<num<<"  is a prime number!! "<<endl;

    else

    cout<<num<<"  is not a Prime number! "<<endl;

    return 0;
}
