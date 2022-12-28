#include<iostream>
using namespace std;
int main() {
int arr[50], i, elem, pos,n;
cout<<"Enter the Size for Array: ";
cin>>n;
cout<<"Enter "<<n<<" Array Elements: ";
for(i=0; i<n; i++)
cin>>arr[i];
cout<<"\nEnter Element to Insert: ";
cin>>elem;
cout<<"At What Position ? ";
cin>>pos;
for(i=n-1; i>=pos; i--)
arr[i] = arr[i-1];
arr[pos-1] = elem;
cout<<"\nThe New Array is:\n";
for(i=0; i<=n; i++)
cout<<arr[i]<<" ";
return 0;
}