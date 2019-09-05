//Consider an array A with n of positive integers. An integer idx is called a POE 
//(point of equilibrium) of A, if A[0] + A[1] + … + A[idx – 1] is equal to A[idx + 1] + 
//A[idx + 2] + … + A[n – 1]. Write a function to return POE of an array, if it exists and -1
//otherwise. 
//The signature of the function is:
//int f(int[] a)

#include<iostream>
using namespace std;
int size,POE;
int function(int a[])
{
	int sum1=0,sum2=0,i,j;
for( i=0;i<size;i++)
{
 sum1=sum1+a[i];
	for(j=i+2;j<size;j++)
	{
	sum2=a[j]+sum2;	
	}
	if (sum1=sum2) return POE=i+1;
}return -1;	
}

int main()
{
	cout<<"Enter the size of the array";
	cin>>size;
	int a[size];
	cout<<"\nEnter elements of array"<<function(a);

	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nReturned value is"<<function(a);

	return 0;
}
