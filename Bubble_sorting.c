#include<stdio.h>

int main(){

int a[100],i,j,n,temp;

printf("Enter the number of elements:\n");

scanf("%d",&n);

printf("Enter %d numbers:\n",n);


for(i=1;i<=n;i++){

     scanf("%d",&a[i]);
}
for(i=1;i<=n-1;i++){

    for(j=1;j<=n-i;j++){

        if(a[j]>=a[j+1]){

            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

    }

}

printf("sorted list in ascending order \n");

for(i=1;i<=n;i++){

    printf("%d ",a[i]);

}

}
