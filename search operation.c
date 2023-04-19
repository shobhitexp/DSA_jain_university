# include<stdio.h>
#include<conio.h>
void main()
{
int arr[] = {10,30,50,70,80};
int element, n,item,flag=1;
cout<<"Enter the element to search"; 
cin>> element;
n= 5; int i = 0, j = 0;
cout<<"The array elements are: \n");
for(i = 0; i<n; i++)
{
  cout<<arr[i];
}
cout<<"Which element you want to search:";
cin>>item;
while( j< n)
{
if arr[j]==item)
{
  int flag=1; 
  break;
} 
  j=j+1;
} 
  if(flag==1)
    cout<<"element found at:<<j+1;
  else
    cout<<" element not found";
}
