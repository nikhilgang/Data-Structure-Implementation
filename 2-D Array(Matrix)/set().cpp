
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

void set(int a[],int n,int index,int s)
{
        a[index]=s;
        display(a,n);
    
}



int main()
{
	int a[20],n,s,i,index;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element in array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter index ";
	cin>>index;
	cout<<"enter element";
	cin>>s;
	set(a,n,index,s);

	return 0;
}
