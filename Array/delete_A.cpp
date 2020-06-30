#include <iostream>

using namespace std;


void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

void delete1(int a[],int n,int s)
{   
    int i;
	for(i=s;i<n;i++)
	{
	    a[i]=a[i+1];
	}
	n--;
	display(a,n);
}

int main()
{
	int a[20],n,s,i;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element in array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter index that u want delete";
	cin>>s;
	delete1(a,n,s);

	return 0;
}
