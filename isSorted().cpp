
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



void isSorted(int a[],int n)
{   
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            cout<<" array is unsorted ";
            break;
        }
    }
    if(i==n-1)
        cout<<" array is Sorted ";
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
	
	isSorted(a,n);

	return 0;
}
