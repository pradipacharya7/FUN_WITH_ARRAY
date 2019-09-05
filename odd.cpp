//An array with an odd number of elements is said to be centered if all elements 
//(except the middle one) are strictly greater than the value of the middle element.
//Note that only arrays with an odd number of elements have a middle element. 
//Write a function that accepts an integer array and returns 1 if it is a centered array, 
//otherwise it returns 0.

#include<iostream>
using namespace std;
int size=5;

int function(int a[])
{
	int mid=size/2;

	if(a[mid]%2==0)
	{
		return 0;
		
	}
	else return 1;	
}

int main()
{
	int a[]={1,3,5,7,9};
	int ret_value=function(a);
	cout<<"Return value is "<<ret_value;
	return 0;
}

