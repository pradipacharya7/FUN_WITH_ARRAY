//Write a function that accepts a character array, a zero-based start position and a length.
//It should return a character array containing lengthcharacters starting with the
//startcharacter of the input array. The function should do error checking on the start
//position and the length and return null if the either value is not legal.
//The function signature is:
//char[ ] f(char[ ] a, int start, int len)

#include<iostream>
using namespace std;
int size;
char *f(char a[], int start, int length)
{
if(start==0&&length<=size)	
{
	return a;
}
else return NULL;
}

int main()
{
	int start, length;
	cout<<"Enter the size of the array:";
	cin>>size;
	char a[size];
	cout<<"Enter the values in the array of the array:";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter start position and length";
	cin>>start>>length;
	
	char *b=f(a,start,length);
	if(b==NULL)
	cout<<"Illegal inputs\t returned value is:: NULL";
	else{
	
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<b[i];
	}
}
	return 0;
	
}
