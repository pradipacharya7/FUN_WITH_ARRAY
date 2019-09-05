#include<iostream>
using namespace std;
int function(int a[])
{
int i,leftsum=0,sum=0;

for(i=0;i<5;i++)
sum=sum+a[i];

for(i=0;i<5;i++)
{
	sum=sum-a[i];
	if(leftsum==sum)
	    return i; 
	
	leftsum=leftsum+a[i];
}
return -1;

	
}

int main()
{
//	int a[] = { -7, 1, 5, 2, -4, 3, 0 };  
	int a[5],i;
	cout<<"Enter the values of the array";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
//int arr_size = sizeof(a) / sizeof(a[0]); 
//cout<<"\t"<<arr_size;
	int b=function(a);
	if(b==-1) cout<<"No POE";
	else
	cout<<"POE is "<<b;
}
