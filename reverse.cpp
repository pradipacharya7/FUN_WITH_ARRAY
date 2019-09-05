//Write a function to reverse an integer using numeric operators and without using any arrays
// or other data structures.

#include<iostream>
using namespace std;

int reverse(int n)
{
	int rev=0;
	while(n>0)
	{
		int num=n%10;
		rev=rev*10+num;
		n=n/10;
	}
	return rev;
}

int main()
{
	int n;
	cout<<"Enter any number";
	cin>>n;
	while(n<0)
	{
	cout<<"\nRe-Enter any +ve Integer";
	cin>>n;	
	}
	int r=reverse(n);
	cout<<"Reverse of a user given inter is "<<r;
	return 0;
}
