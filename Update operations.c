#include<stdio.h>
#include<conio.h>
void main()
{
int i, size, x, pos;
int a[]={1, 3, 5, 7, 9};
size=sizeof(a)/sizeof(a[0]);
printf("The array elements before update operation are:");
for(i=0;i<size;i++)
printf("\na[%d]= %d", i, a[i]);
printf("\nThe position where you wish to update the element: ");
scanf("%d", &pos);
printf("The new element: ");
scanf("%d", &x);
a[pos-1]=x;
printf("The array elements after update operation:");
for(i=0;i<size;i++)
printf("\na[%d]= %d", i, a[i]);
}
