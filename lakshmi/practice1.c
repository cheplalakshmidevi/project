#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
        int data;
        struct node *next;
}node;
int main()
{
        int i,n;
        struct node*first,*new,*new1,*prev,*count;
        printf("enter the limit:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                printf("%d->",i);
        }
        first->next=NULL;
        new=first;
        for(i=0;i<=n;i++)
        {
                new->next=(struct node*)malloc(sizeof(struct node));
                new=new->next;
                new->next=NULL;
        }
        for(new1=first;new1->next!=NULL;new1=new1->next)
        {
                for(count=new1->next;count!=NULL;count=count->next)

                
                {
                        if(new1->data > count->data)
                        {
                                int temp=new1->data;
                                new1->data=count->data;
                                count->data=temp;
                        }
                }
        }
        new=first->next;
}
