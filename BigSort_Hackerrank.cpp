#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    //cout<<"Enter array size: "<<endl;
    cin>>n;
    vector<string> ar;

    for(int i=0; i<n; i++)
    {
        string el;
        cin>>el;
        ar.push_back(el);
    }

    int mini;


    for(int i=0; i<n-1; i++)
    {
        mini=i;
        for(int j=i+1; j<n; j++)
        {
            //int b = atoi(a.c_str());
            int a=atoi(ar[j].c_str());
            int b=atoi(ar[mini].c_str());
          //  cout<<"a "<<a<<" b "<<b<<endl;

            if(a<b)
            {
            //   cout<<"mini "<<mini<<" a "<<a<<endl;
                mini=j;
            }
        }
        string temp=ar[i];
        ar[i]=ar[mini];
        ar[mini]=temp;



    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<endl;
    }
}

