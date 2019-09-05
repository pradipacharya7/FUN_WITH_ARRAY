//Write a function that takes an array of integers as an argument and returns a value based 
//on the sums of the even and odd numbers in the array. Let X = the sum of the odd numbers 
//in the array and let Y = the sum of the even numbers.
//The function should return X – Y 

#include<iostream>
using namespace std;

int diff(int a[],int n)
{
	int sum_even=0,sum_odd=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0) sum_even=sum_even+a[i];
		else sum_odd=sum_even+a[i];
	}
	int difference=sum_even-sum_odd;
	return(difference);
	
}
int main()
{
	int n;
	cout<<"Enter teh size of the araray";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sub=diff(a,n);
	cout<<"Difference between sum of the even and the odd is"<<sub;
	return 0;
}
