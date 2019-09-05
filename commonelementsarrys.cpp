//Write a function to return an array containing all elements common to two given arrays 
//containing distinct positive integers. You should not use any inbuilt methods. 
//You are allowed to use any number of arrays.
#include<iostream>
int equal_val[5];
using namespace std;
int *function(int a[],int b[],int size1,int size2)
{
	if(size1>size2)
	{
	
for(int i=0;i<size1;i++)
{
for(int j=0;j<size2;j++)
{
	if(a[i]==b[j]) equal_val[i]=a[i];
	
}	
}
return equal_val;
}
else 
	{
	
for(int i=0;i<size2;i++)
{
for(int j=0;j<size1;j++)
{
	if(a[i]==b[j]) equal_val[i]=a[i];
	
}	
}
return equal_val;
}
return NULL;
	
}

int main()
{
	int size1,size2;
	cout<<"Enter the size of the two array";
	cin>>size1>>size2;
	int a[size1],b[size2];
	cout<<"\nEnter values of a array";
	for(int i=0;i<size1;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the values of another array";

	for(int i=0;i<size2;i++)
	{
		cin>>b[i];
	}
	int *c=function(a,b,size1,size2);
	cout<<"\nCommon elements are";
		for(int i=0;i<5;i++)
	{
		cout<<"\t"<<c[i];
	}
}
