#include<stdio.h>

void doRecursive(int number)
{

    if(number==0)
        {
        printf("%d ",number);

    }
    else
        {
        printf("%d ",number);
        number=number-1;
        doRecursive(number);


        }
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    doRecursive(n);


}

