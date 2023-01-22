pointer initialization:-
int a=12;
int *ptr;
ptr =&a;
===========================================================
pointer with function
Returntype (*function pointer) (parameter1, parameter2);
============================================
Void swap (int *firstvar, int *secondvar)
{
int temp;
// dereferenced pointers refers to the function is working with values at
addresses which can be passed in temp=*firstvar;
*firstvar=*secondvar;
*secondvar=temp;
return;
}
int main (void)
{
int m = 100;
int n = 200;
printf"before swap: value of m: %d \n", m) ; 
printf ("before swap: value of n: %d \n", n);
swap &m, &n);
printf"after swap: value of m: %d \n", m); 
printf ("after swap: value of n: %d \n", n);
// using "address of" operator to pass in the address of each variable swap &m, &n);
//check values outside the function after swap function.
printf"after swap: value of m: 8d \n", m); 
printf ("after swap: value of n: 8d \n", n);
return 0;
}
==========================================================
