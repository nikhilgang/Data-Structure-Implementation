#include<stdio.h>
#include<stdlib.h>

struct Element
{
    int i;
    int j;
    int x;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

int main()
{
    struct sparse s1,s2,s3;
    int i,j,k=0;
    printf("enter dimension of 1st matrix\n");
    scanf("%d",&s1.n);
    printf("enter total no\n");
    scanf("%d",&s1.num);
    
    s1.ele=(struct Element *)malloc(s1.num*sizeof(struct Element));
    printf("Enter non-zero Elements");
    for(i=0;i<s1.num;i++)
        scanf("%d%d%d",&s1.ele[i].i,&s1.ele[i].j,&s1.ele[i].x);
        
    printf("enter dimension of 2nd matrix\n");
    scanf("%d",&s2.n);
    printf("enter total no\n");
    scanf("%d",&s2.num);
    
    s2.ele=(struct Element *)malloc(s2.num*sizeof(struct Element));
    printf("Enter non-zero Elements");
    for(i=0;i<s2.num;i++)
        scanf("%d%d%d",&s2.ele[i].i,&s2.ele[i].j,&s2.ele[i].x);
        
    printf("1st matrix\t\n");
    for(i=0;i<s1.n;i++)
    {
        for(j=0;j<s1.n;j++)
        {
            if(i==s1.ele[k].i && j==s1.ele[k].j)
                printf("%d ",s1.ele[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
    
    printf("2nd matxix\t\n");
    for(i=0;i<s2.n;i++)
    {
        for(j=0;j<s2.n;j++)
        {
            if(i==s2.ele[k].i && j==s2.ele[k].j)
                printf("%d ",s2.ele[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}