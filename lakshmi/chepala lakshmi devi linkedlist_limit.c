//WAP in C programming to create a linked-list for fixed range of numbers in sorted order 1 - limit.
#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist
{
        int data;
        struct linkedlist* next;
}node;

node* createnode(int);
node* addnode(node*,int);
void selectmenu(node*);
void display(node*);


int main()
{
        node* head=NULL;
        selectmenu(head);
        return 0;
}

node* createnode(int n)
{
        node* newnode;
        newnode=(node*)malloc(sizeof(node));
        newnode->data=n;
        newnode->next=NULL;
        return newnode;
}

node* addnode(node *head,int limit)
{
        int i;
        node* temp=NULL;
        node* newnode=NULL;

        head = createnode(1);
        temp=head;
      for(i=2;i<=limit;i++)
        {
                newnode=createnode(i);
                temp->next=newnode;
                temp=temp->next;
        }
        return head;
}

void selectmenu(node *head)
{
        int ch,limit;



        do
        {
                printf("\n\n.......menu.....\
                                \n1:start\
                                \n2:display\
                                \n3:EXIT");
                printf("\nenter choice::");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1:
                                printf("\nlimit:");
                                scanf("%d",&limit);

                                head=addnode(head,limit);
                                break;
                        case 2:
                                printf("\n..................\n");
                                display(head);
                                printf("\n...................\n");
                                break;
                        case 3:
                                exit(0);
                        
                        default:
                                printf("invalid");
                                break;
                }
        }while(ch!=0);

}