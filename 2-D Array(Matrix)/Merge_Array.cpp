
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



void merge(int a[],int b[],int m,int n)
{
    int c[50];
    int i,j=0,len=0;
    for(i=0;i<m;i++)
    {
        c[j++]=a[i];
        len++;
    }
    for(i=0;i<n;i++)
    {
        c[j++]=b[i];
        len++;
    }
    display(c,len);
}


int main()
{
	int a[20],b[20],n,i,m;
	cout<<"enter size of 1st and 2nd array\t";
	cin>>m>>n;
	cout<<"enter element in 1st array\t";
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element in 2nd array\t";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	merge(a,b,m,n);

	return 0;
}
