#include<stdio.h>
#include<conio.h>


void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void append(int *a[],int n,int s)
{
	a[n]=s;
	n++;
	display(a,n);
}

int main()
{
	int a[20],n,s,i;
	clrscr();
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter element in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element that u want to append");
	scanf("%d",&s);
	append(&a,n,s);

	getch();

	return 0;
}