#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct Term
{
 int coeff;
 int exp;
};

struct poly
{
 int n;
 struct Term *terms;
};

void create(struct poly *p)
{
 int i;
 printf("Number of terms?");
 scanf("%d",&p->n);
 p->terms=(struct Term*)malloc(p->n*sizeof(struct Term));

 printf("Enter terms\n");
 
 for(i=0;i<p->n;i++)
    scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);

}

void display(struct poly p)
{
 int i;
 for(i=0;i<(p.n-1);i++)
    printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
    
 printf("%dx%d",p.terms[i].coeff,p.terms[i].exp);
 printf("\n");
 
}

void eval(struct poly p,int x)
{
    int i,sum=0;
    for(i=0;i<p.n;i++)
    {
        sum=sum+(p.terms[i].coeff)*pow(x,p.terms[i].exp);
    }
    printf("value of expression on %d is %d ",x,sum);
}

int main()
{
    struct poly p1;
    create(&p1);
    
    display(p1);
    
    eval(p1,5);
    
    return 0;
}