#include<stdio.h>

int main(){

int p=100,q=200,temp,*a,*b;

a=&p;

b=&q;

printf("Before swap \n p=%d,  q=%d",*a,*b);
printf("Stored Address \n a=%x,    b=%x",a,b);

temp=*a;

*a=*b;

*b=temp;

printf("\nAfter swap \n p=%d,     q=%d",*a,*b);

printf("\nStored Address after swap \n b=%x,    a=%x",a,b);

return 0;

}
