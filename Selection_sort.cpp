#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int ar[n],cnt=0;
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    int mini;

    for(int i=0; i<n-1; i++)
    {
        mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(ar[j]<ar[mini])
            {
                mini=j;
                cnt++;
            }
        }
        int temp=ar[i];
        ar[i]=ar[mini];
        ar[mini]=temp;
        cout<<"when i = "<<i<<" the array: "<<endl;
        for(int k=0; k<n; k++)
        {
            cout<<ar[k]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The sorted array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" "<<endl;
    }

    cout<<"swap steps: "<<cnt<<endl;
}
