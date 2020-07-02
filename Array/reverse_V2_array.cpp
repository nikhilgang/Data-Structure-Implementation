
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



void reverse_v2(int a[],int n)
{
    int i,j,temp=0;
    
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
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
	
	reverse_v2(a,n);
	display(a,n);

	return 0;
}
