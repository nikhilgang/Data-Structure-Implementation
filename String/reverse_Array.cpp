
#include <iostream>

using namespace std;


void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}

void reverse(int a[],int n)
{
    int b[20],i,j=0;
    for(i=n-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}

int main()
{
	int a[20],n,s,i,index;
	cout<<"enter size of array\t";
	cin>>n;
	cout<<"enter element in array\t";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	reverse(a,n);
	display(a,n);

	return 0;
}
