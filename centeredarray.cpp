//An array with an odd number of elements is said to be centered if all elements
// (except the middle one) are strictly greater than the value of the middle element. 
// Note that only arrays with an odd number of elements have a middle element. 
// Write a function that accepts an integer array and returns 1 if it is a centered array,
// otherwise it returns 0. e.g. {3, 2, 1, 4, 5}

#include<iostream>
using namespace std;

int function(int a[], int n)
{
int mid = n/2;
int count=0;
for(int i=0;i<n;i++)
{
	if (a[mid]<=a[i])
	count++;
}
if (count==n)
return 1;
else return 0;

}

int main()
{
	int n;
	cout<<"ENter the size of the array";
	cin>>n;
	
	while(n%2==0)
	{
		cout<<"\nRe-enter odd size of the array";
		cin>>n;
	}
	int a[n];
	cout<<"\nEnter elements of the array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int returened_val= function(a,n);
	if(returened_val==1) cout<<"\nCentered array";
	else cout<<"\nNot centered array";
	return 0;
}
