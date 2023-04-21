#include<iostream>
using namespace std;
int factorial(int n);
int main() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
cout << "Factorial of " << n << " = " << factorial(n);
return 0;
}
int factorial(int n) {
if(n > 1)
return n * factorial(n - 1);
else
return 1;
}
-----------------------------
output:-                     
Enter a positive integer: 7  
Factorial of 7 = 5040.      
-----------------------------
======================================================================
  // Tail Recursion
#include <stdio.h>
void fun(int n)
{
if (n > 0)
{
printf("%d", n);
fun(n-1);
}
}
int main ()
{
fun(3);
return 0;
}
=======================================================================
#include <stdio.h>
void fun(int n)
{
if(n > 0)
{
fun(n-1);
printf ("%d", n);
}
}
int main()
{
fun(3);
return 0;
}
========================================================================
head recursion 
#include<iostream>
using namespace std;
int fact(int n); /* Function Definition */
void main()
{
int num, res;
printf("Enter positive integer: ");
scanf("%d",&num);
res = fact(num); /* Normal Function Call */
printf("%d! = %d" ,num ,res);
getch();
}
int fact(int n) /* Function Definition */
{ int f=1;
if(n <= 0)
{
return(1);
} else {
f = n * fact(n-1); /* Recursive Function Call as fact() calls itself */
return(f); } }

===========================================================================
  Example for Tree Recursion:
#include <stdio.h>
void TR(int n)
{
if (n > 0)
{
printf("%d\t", n);
TR(n - 1);
TR(n - 1);
}
}
int main() {
int x = 3;
TR(x);
}
============================================================================
  Indirect recursion
#include<stdio.h>
void odd();
void even();
int n=1;
void odd()
{
if(n <= 10)
{
printf("%d ", n+1);
n++;
even();
}
return;
}
void even()
{
if(n <= 10)
{
printf("%d ", n-1);
n++;
odd();
}
return;
}
int main()
{
odd();
}
================================================
fibonacci series 
#include<iostream>
using namespace std;
int main()
{
int n,i=0;
cout<<"Input the number of terms for Fibonacci Series:";
cin>>n;
cout<<"\nFibonacci Series is as follows\n";
while(i<n)
{
cout<<" "<<fibonacci(i); i++;
}
return 0;
int fibonacci(int n)
{
  if((n==1)||(n==0))
{
return(n);
}
else
{
return(fibonacci(n-1)+fibonacci(n-2));
}
}
}

===================================================================
  Hcf of two number
  #include <stdio.h>
int gcd(int a, int b)
{
// Everything divides 0
if (a == 0)
return b;
if (b == 0)
return a;
if (a == b)
return a;
if (a > b)
return gcd(a-b, b);
return gcd(a, b-a);
}
int main()
{
int a = 198, b = 156;
printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
return 0;
}

====================================================================
  Tower of hanoi problem
====================================================================
#include<iostream>
using namespace std;
void tower(int n,char s,char a,char d)
{
if(n==1){
cout<<"\t\tMove disc 1 from "<<s<<" to "<<d<<"\n";
return;
}
else{
tower(n-1,s,d,a);
cout<<"\t\tMove disc "<<n<<" from "<<s<<" to
"<<d<<"\n";
tower(n-1,a,s,d);
}
}
int main()
{
int n;
cout<<"\n\t\t*****Tower of Hanoi*****\n";
cout<<"\t\tEnter number of discs : ";
cin>>n;
cout<<"\n\n";
tower(n,'S','A','D');
}
