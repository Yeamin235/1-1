#include<stdio.h>
struct person{
int age;
float weight;
char name[30];

};

int main(){
struct person *ptr;

int i,n;

printf("Enter the number of persons: ");

scanf("%d",&n);

//allocating memory for n numbers of struct person

ptr=(struct person*)malloc(n * sizeof(struct person));

for(i=0;i<n;++i){

    printf("Enter first name and age respectively: ");
    //To access members of 1st struct person,
    //ptr->name and ptr->age is used
    //to access members of 2nd struct person
    // (ptr+i)->name and (ptr+i)->age is used


    scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);



}

printf("\nDisplaying information: \n");

for(i=0;i<n;++i)
{

    printf("Name: %s\tage: %d\n",(ptr+i)->name, (ptr+i)->age);

}

return 0;

}





