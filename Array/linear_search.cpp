
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

void lsearch(int a[],int n,int s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<"element found"<<i<<"location";
            break;
        }
    }
    if(i==n)
        cout<<"element not found";
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
	cout<<"enter element u want to search";
	cin>>s;
	lsearch(a,n,s);

	return 0;
}
