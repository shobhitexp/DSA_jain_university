#include<stdio.h>
#include<conio.h>
int main()
{
  int arr[]={10,20,30,50,60};
  int k=3,n=5;
  int i,j;
  count<<"The array elements:\n";
  for (i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  j=k;
  
  while(j<n){
    arr[j-1]=arr[j];
    j=j+1;
  }
  n=n-1;
  cout<<"the array after deletation:\n";
  for (i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
