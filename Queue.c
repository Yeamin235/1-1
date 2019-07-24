#include<stdio.h>

void enqueue(int item);
void dequeue();
void traverse();
int front=0,rear=0;
/*int IsFull();
int IsEmpty(); */
int Queue[5];

int main(){

int item,ch;

while(1)
{
printf("Enter option(1. Enqueue 2. Dequeue): ");
scanf("%d",&ch);
if(ch==1){



printf("\n Enter item: ");

scanf("%d",&item);

 enqueue(item);

  traverse();
}
else if(ch==2){
dequeue(item);

 traverse();
}
}
 }



void enqueue(int item){

 rear++;
 if(rear>5)
{
    printf("\n Array is full");
}

else
{Queue[rear]=item;}
}

void dequeue(){

front=front+1;

if(front>rear){

    printf("Queue is empty. \n");
}

else
{
    Queue[front]=-1;
}



}



void traverse(){

int i;
printf("\n items are in queue ");

for(i=1;i<=rear;i++){

    printf("%d ",Queue[i]);

}


}








