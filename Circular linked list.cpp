#include <iostream>
#include<cstdlib>

using namespace std;

typedef struct circular
{
    int info;
    struct circular *next;
} node;

node *head;

void empty_list()
{
    head=NULL;
}

void insert_beg(int item)
{
    node *ptr,*loc=head;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(head==NULL)
    {
        head=ptr;
        ptr->next=ptr;
    }
    else
    {
        while(loc->next!=head)
            loc=loc->next;
        loc->next=ptr;
        ptr->next=head;
        head=ptr;
    }
}


void traversal()
{
    node *ptr=head;
    cout<<endl;
    do
    {
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
}

void insert_end(int item)
{
    node *ptr,*loc=head;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;

    if(head == NULL)
    {
         head=ptr;
         ptr=ptr->next;
    }
    else
    {
        while(loc->next!=head)
            loc=loc->next;
        loc->next=ptr;
        ptr->next=head;
    }
}

void del_beg()
{
    node *ptr=head,*loc;;
    if(head==NULL)
        cout<<endl<<"Empty list";
    else
    {
        while(ptr->next!=head)
            ptr=ptr->next;
        loc=head;
        ptr->next=head->next;
        head=head->next;
        free(loc);
    }
}

void del_end()
{
    node *ptr=head->next,*loc=head;;
    if(head==NULL)
        cout<<endl<<"Empty list";
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
            loc=loc->next;
        }
        loc->next=head;
        free(ptr);
    }
}

int main()
{
    int n,a;
    cout<<"Enter the number nodes want to insert : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter the number : ";
        cin>>a;
        insert_beg(a);
    }

    cout<<endl;
    traversal()     ;

    cout<<endl<<"Enter the number to insert at end: ";
    cin>>a;
    insert_end(a);

    del_beg();
    del_end();

    traversal();

    return 0;
}
