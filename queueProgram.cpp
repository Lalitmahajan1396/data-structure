#include <iostream.h>
#include <conio.h>

int queue[5];
int front = -1;
int rear = -1;
int n = 5;

void enqueue() {

int x;
cout<<"Enter a Data : ";
cin>>x;

if(rear == n - 1) {

cout<<"Queue is Overflow";

}
else if(front == -1 && rear == -1) {

front = rear = 0;
queue[rear] = x;

}

else {

rear++;

queue[rear] = x;

}
}

void dequeue() {

if(front == -1 && rear == -1) {

cout<<"Queue is Underflow";

}
else if(front == rear){

front = rear = -1;

}
else {

front++;
cout<<queue[front];
}

}

void peek() {

if(front == -1 && rear == -1) {

cout<<"Queue is Empty";

}
else {

cout<<queue[front];

}

}


void display() {

for(int i = front; i < rear+1; i++) {

cout<<queue[i]<<"\t";

}

}

void main() {

int choice;

do {

cout<<"\n Enter Your Choice - 1 : Enqueue , 2 : Dequeue , 3 : Peek , 4 : Display \n";
cin>>choice;

switch(choice) {

case 1 : enqueue();
break;

case 2 : dequeue();
break;

case 3 : peek();
break;

case 4 : display();
break;

default : cout<<"Invalid";


}

}while(choice > 0);


getch();
clrscr();

}