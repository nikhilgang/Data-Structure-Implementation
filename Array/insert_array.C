#include<stdio.h>
#include<conio.h>


void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}

void insert(int *a[],int n,int s,int p)
{
	int i;
	for(i=n;i>=p-1;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=s;
	n++;

	display(a,n);
}

int main()
{
	int a[20],n,s,i,p;
	clrscr();
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter element in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element that u want to insert and position\n");
	scanf("%d %d",&s,&p);
	insert(&a,n,s,p);

	getch();

	return 0;
}