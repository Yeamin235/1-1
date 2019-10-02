#include<iostream>
#include<stdio.h>
int index(int x,int a[],int n);
int main()
{
    int ans,x,i,n,j,z;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int a[n],s[n];
    printf("Enter values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++){
            if(a[i]>a[j])
            {
                z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
        s[i]=a[i];

    }
    printf("Enter the value to search: \n");
    scanf("%d",&x);
    ans=index(x,s,n);
    if(ans>=0 & ans<n)
        printf("Position : %d",ans);
    else
       printf("Value doesn't exist.");
    return 0;
}
int index(int x,int a[],int n)
{
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
            lo=mid+1;
        else
            hi=mid-1;
        }
    return n;
}
