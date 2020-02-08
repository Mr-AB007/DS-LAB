#include <iostream>
#include<stdlib.h>

using namespace std;

typedef struct linkedlist
{
    int info;
    struct linkedlist *next;
}node;

node *head;

void printrev();

void empty_list()
{
    head=NULL;
}

void insert_list(int a)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=a;
    ptr->next=head;
    head=ptr;
}

void disp()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<endl<<ptr->info;
        ptr=ptr->next;
    }
}

int main()
{
    int a;
    empty_list();
    for(int i=0;i<4;i++)
    {
        cout<<endl<<"Enter the number ";
        cin>>a;
        insert_list(a);
    }
    disp();
    cout<<endl;
    printrev();
    cout<<endl<<"Linked list after reverse ";
    disp();
    return 0;
}

void printrev()
{
    node *ptr=head,*last=NULL,*link,*head2=NULL,*ptr2;
    while(ptr!=last)
    {
        if(ptr->next==last)
        {
            ptr2=last=ptr;
            ptr2->next=NULL;
            if(head2==NULL)
            {
                link=head2=ptr2;
            }
            else
            {
                while(link->next!=NULL)
                {
                    link=link->next;
                }

                link->next=ptr2;
            }

            ptr=head;
            continue;
        }
        ptr=ptr->next;
    }
    head=head2;
}
