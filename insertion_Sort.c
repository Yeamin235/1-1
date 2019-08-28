#include<stdio.h>

int main(){

int a[100],i,j,n,key;

printf("Enter the number of elements:\n");

scanf("%d",&n);

printf("Enter %d numbers:\n",n);

for(i=1;i<=n;i++){

    scanf("%d ",&a[i]);

}

for(i=1;i<=n;i++){

     scanf("%d",&a[i]);
}
for(i=2;i<=n;i++){
key=a[i];
j=i-1;
while(j>0 && a[j]>key){

    a[j+1]=a[j];
    j=j-1;

}
    a[j+1]=key;
    }


printf("sorted list in ascending order \n");

for(i=1;i<=n;i++){

    printf("%d ",a[i]);

}

}
