#include<stdio.h>

int Fibo(int f)
{

    if(f==0){

         f=0;
    }
   else if(f==1){

        f=1;
    }
    else
        {
        f=(Fibo(f-1)+Fibo(f-2));

        }
    return f;
}
int main()
{

int f,i;
printf("Enter a required number : ");
scanf("%d",&f);
Fibo(f);
for(i=0;i<f;i++){

    printf("%d ",Fibo(i));

}


}
