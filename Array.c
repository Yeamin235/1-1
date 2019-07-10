#include<stdio.h>
int main(){

int B,i;
int A[20];

printf("How many elements do you want to show or insert?\n");

printf("Enter the element range:\n");

    scanf("%d",&B);

printf("Enter any elements:\n");

    for(i=0;i<B;i++){

        scanf("%d",&A[i]);

    }
int c;

printf("Insert a new element in A(array)\n");

    scanf("%d",&c);
A[i]=c;
B=B+1;
    for(i=0;i<B;i++){

    printf("%d ",A[i]);

}
printf("Let's delete one element\n");

int d;

printf("Enter the element you want to delete:\n");

    scanf("%d",&d);
B=B-1;


for(i=d;i<B;i++){
A[i]=A[i+1];

}
for(i=0;i<B;i++){
 printf("%d ",A[i]);
}

return 0;

}



