#include<stdio.h>
int main(){
struct person{
     int age;
     char name[20],add[100];
 };
     struct person a[100],*ptr;
     int n,i;
     char info[20];
     ptr=a;
     printf("How many student's information you want to add : ");
     scanf("%d",&n);

     for(i=0; i<n; i++){
          printf("\nEnter student information - ");
          printf("\nEnter name : ");
          scanf("%s",(ptr+i)->name);
          printf("Enter age : ");
          scanf("%d",&(ptr+i)->age);
          printf("Enter Address : ");
          scanf("%s",(ptr+i)->add);
          }
     printf("\nStident information : \n");
     for(i=0; i<n; i++){
          printf("Name: %s\tAge: %d\t\tAddress: %s\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->add);
     }
     printf("\nEnter a student name to search information : ");
     scanf("%s",info);

     for(i=0; i<n; i++){
          if(strcmp(info,(ptr+i)->name)==0){
          printf("\nName: %s\tAge: %d\t\tAddress: %s\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->add);
          break;
          }
          else if(i==n-1){
               printf("Data not found");
          }
     }
 return 0;
 }



