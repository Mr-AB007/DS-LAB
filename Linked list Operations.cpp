#include <iostream>
#include<stdlib.h>

using namespace std;

typedef struct linked_list
{
    int info;
    struct linked_list *next;
}Node;

Node *head;

void empty_list()
{
    head=NULL;
}


void insert_beg();
void traversal();
Node * search_ele(int);
void insert_beg();
void insert_after(int)

int main()
{
    int n,item;
    cout<<"How many insertion : ";
    cin>>n;

    empty_list();

    for(int i=0;i<n;i++)
    {
         insert_node(item);
    }

    traversal();
    return 0;
}

void insert_beg()
{
    Node *ptr,*loc=head;
    int item;
    cout<<endl<<"Enter the value : ";
    cin>>item;
    ptr=(Node *)malloc(sizeof(Node));
    ptr->info=a;
    ptr->next=head;
    head=ptr;
}

void insert_after(int n)
{
    Node *ptr,*loc;
    loc=search_ele(n);
    if(loc==NULL)
        cout<<endl<<"Item not found ";
    else
    {
        int item;
        cout<<endl<<"Enter the value : ";
        cin>>item;
        ptr=(Node *)malloc(sizeof(Node));
        ptr->info=a;
        ptr->next=loc->next;
        loc->next=ptr;
    }
}

void insert_end()
{
    Node *ptr,*loc=head;
    int item;
    if(head==NULL)
        cout<<"Empty list";
    else
    {
        cout<<endl<<"Enter the value : ";
        cin>>item;
        ptr=(Node *)malloc(sizeof(Node));
        while(loc->next==NULL)
            loc=loc->next;
        loc->next=ptr;
        ptr->next=NULL;
    }
}

Node * search_ele(int n)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
         if(ptr->info==n)
            return ptr;
         loc=loc->next;
    }
    return(NULL);
}


void traversal()
{
    Node *ptr;void insert_after(int n)
    ptr=head;
    cout<<endl<<"Linked List values are : ";
    while(ptr!=NULL)
    {
        cout<<endl<<ptr->info<<" ";
        ptr=ptr->next;
    }
}


void delete_beg()
{
    Node *ptr=head;
    if(head==NUL)
        cout<<endl<<"Empty list";
    else
    {
        head=ptr->next;
        free(ptr);
    }
}

void delete_end()
{
    Node *ptr=head->next,loc=head;
    if(head==NULL)
        cout<<endl<<"Empty list";
    else{

          while(ptr->next!=NULL)
          {
                ptr=ptr->next;
                loc=loc->next;
          }
          free(ptr);
          loc->next=NULL;
    }
}

void delete_after(int n)
{
    Node *ptr,*loc;
    ptr=search_ele(n);
    if(ptr==NULL)
        cout<<endl<<"Item does not exist ";
    else
    {
      loc=ptr->next;
      ptr->next=loc->next;
      free(loc);
    }
}
