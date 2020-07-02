
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

int min(int a[],int n)
{
        int i,m;
        m=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<m)
                m=a[i];
        }
        
    return m;
}


int max(int a[],int n)
{
        int i,m;
        m=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>m)
                m=a[i];
        }
        
    return m;
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
	
	cout<<"minimum "<<min(a,n)<<endl;
	cout<<"maximum "<<max(a,n)<<endl;

	return 0;
}
