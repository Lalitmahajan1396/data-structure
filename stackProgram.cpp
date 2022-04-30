#include <iostream.h>
#include <conio.h>

int n = 5;
int stack[5];
int top = -1;

void push() {

int x;
cout<<"\n Enter Data : ";
cin>>x;

if(top == n - 1) {

cout<<"Stack is Overflow";

}
else {

top++;
stack[top] = x;

}

}
void pop() {

if(top == -1) {

cout<<"Stack Is Underflow";

}
else {

top--;

}

}
void peek() {

if(top == -1) {

cout<<"Stack Is Empty";

}
else {

cout<<stack[top];

}

}
void display() {

for(int i = top; i >= 0; i-- ) {

cout<<stack[i]<<"\t";

}


}





void main() {

int choice;

do {

cout<<"\n Enter Your Choice - 1 : push() , 2 : pop() , 3 : peek() , 4 : display() ";
cin>>choice;

switch(choice) {

case 1 : push();
break;

case 2 : pop();
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