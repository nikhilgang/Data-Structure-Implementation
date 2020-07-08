
#include <iostream>

using namespace std;

void b_search(int a[],int n,int s)
{
    int i,l,h,mid;
    l=0;
    h=n-1;
    mid=(l+h)/2;
    
    while(l<=h)
    {
        if(a[mid]==s)
        {
            cout<<"element found"<<mid<<"location";
            break;
        }
        else if(a[mid]<s)
        {
           l=mid+1; 
        }
        else
            h=mid-1;
    }
    
}

int main()
{
	int a[20],n,s,i;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element in array in sorted form";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element u want to search";
	cin>>s;
	b_search(a,n,s);

	return 0;
}
