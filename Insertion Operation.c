#include<atdio.h>
#include<conio.h>
int main ()
{
int array [100], position, c, n, value;
cout<<"Enter number of elements in array\n";
cin>>n;
cout<<"Enter "<<n<<" elements\n"<n;
for (c = 0; C < n; c++)
cin>>array [c];
cout<<"Enter the location where you wish to insert an element\n";
cin>>position;
cout<<"Enter the value to insert\n";
cin>>value;
for (c = n-1; c>=position-1;c--)
array[c+1]=array[c];
array[position-1]=value;
cout<<"resultant array is \n";
for (c=0;c<=n;c++)
cout<<array[c]<<" ";
return 0;
}
