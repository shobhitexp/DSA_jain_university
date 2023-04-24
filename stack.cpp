//Stack implementation using Arrays in C++
#include<iostream>
using namespace std;
int stack[100];
int n,i,top,x;
void push();
void pop();
void display();
int main()
{
 int ch;
 cout<<"Enter the number of elements in the stack";
 cin>>n;
 i=1;
 top=-1;
 while(i)
 {
 cout<<"Enter your choice (1-4)"<<endl;
 cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
 cin>>ch;
 switch(ch)
 {
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:display();
 break;
 case 4:i=0;
 break;
 default:cout<<"Wrong Choice!!!!"<<endl;
 break;
 }
 }
return 0;
}



void push()
{
 if(top>=n-1) // OVERFLOW i.e. if stack top goes beyond the size of the stack
 {
 cout<<"STACK IS OVERFLOW"<<endl;

 }
 else
 {

 cout<<"Enter the value to be added :";
 cin>>x;
 top=top+1; // while inserting the element increment the top and insert
 stack[top]=x;
 }
}
void pop()
{
 if(top<=-1) // Underflow i.e. stack is at index -1
 {
 cout<<"STACK IS UNDERFLOW"<<endl;
 }
 else
 {
 cout<<"Value :"<<stack[top]<<"GOT deleted."<<endl;
 top--;
 }
}
void display()
{
 if(top>=0)
 {
 cout<<"Elements in the stack are :";
 for(i=top;i>=0;i--)
 cout<<stack[i]<<" ";
 cout<<"\n";
 }
 else
 cout<<"STACK IS EMPTY."<<endl;
}
