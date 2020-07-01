
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

void get(int a[],int n,int s)
{
        cout<<a[s];
    
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
	cout<<"enter index of element";
	cin>>s;
	get(a,n,s);

	return 0;
}
