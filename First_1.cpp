#include<iostream>
using namespace std;
string s;
int len;
int vis[10];

 void permute(string t){

 if(t.size()==len){

    cout<<t<<endl;
    return;

 }
 for(int i=0;i<len;i++){

    if(vis[i]==1) continue;
    string t2=t+s[i];
    vis[i]=1;
    permute(t2);
    vis[i]=0;



 }


 }

int main(){
cin>>s;
len=s.size();
permute("");



}
