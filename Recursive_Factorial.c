#include<stdio.h>

int Factorial(int num)
{

if(num==0)
    {
    num=1;
   // printf("The Factorial is : 1");

    }
else
    {

    num=num*Factorial(num-1);

    }
return num;
}

int main()
{

int num;
printf("Enter a Number : ");
scanf("%d",&num);
printf("%d",Factorial(num));





}
