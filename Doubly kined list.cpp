// Program for all operation on doubly linked list


#include <iostream>
#include<cstdlib>

using namespace std;

typedef struct Dubly
{
    struct Dubly *prev;
    int info;
    struct Dubly *next;
}node;

node *head,*tail;

void empty_linked()
{
    head=tail=NULL;
}

void insertionBeg(int);
void travforward();
void travreverse();
void insertionEnd(int);
void insertionAtN(int);
node* search_item(int);
void delBeg();
void delEnd();
void delNth(int);


int main()
{
    int a,n;
    cout<<"Enter the No of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter the element : ";
        cin>>a;
        insertionBeg(a);
    }


    travforward();
    cout<<endl<<endl<<"Traversal in reverse : ";
    travreverse();


    cout<<endl<<"Value for insertion at end : ";
    cin>>a;
    insertionEnd(a);
    travforward();

    cout<<endl<<endl<<"Enter the element where u want to insert : ";
    cin>>a;
    insertionAtN(a);

    cout<<endl<<"List is : ";
    travforward();

    cout<<endl<<"list after deletion at Beginning : ";
    delBeg();
    delEnd();
    
    cout<<endl<<"Enter the number to delete that node : ";
    cin>>a;
    delNth(a);
    travforward();
    cout<<endl;
    travreverse();
    
    return 0;
}



void insertionBeg(int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(head==NULL)
    {
        head=tail=ptr;
        ptr->next=ptr->prev=NULL;
    }
    else
    {
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
        ptr->prev=NULL;

    }
}

void travforward()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }
}

void travreverse()
{
    node *ptr=tail;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->prev;
    }
}


void insertionEnd(int item)
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=item;
    if(head==NULL)
    {
        head=tail=ptr;
        ptr->next=ptr->prev=NULL;
    }
    else
    {
        ptr->prev=tail;
        tail->next=ptr;
        tail=ptr;
        ptr->next=NULL;

    }
}


node* search_item(int item)
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        if(item==ptr->info)
            return ptr;
        ptr=ptr->next;
    }
    return NULL;
}

void insertionAtN(int after)            //insertion after node check insertion before node 3 cases
{
    node *ptr=search_item(after),*loc,*aloc;
     loc=(node *)malloc(sizeof(node));
     cout<<endl<<"Enter the value : ";
     cin>>loc->info;
    if(ptr==NULL)
        cout<<endl<<"Item not found ";
    else if(ptr->next==NULL)
    {
        loc->prev=ptr;
        ptr->next=loc;
        tail=loc;
        loc->next=NULL;
    }
     else
     {
        aloc=ptr->next;
        ptr->next=loc;
        loc->next=aloc;
        aloc->prev=loc;
        loc->prev=ptr;
     }
}

void delBeg()
{
    node *ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
}

void delEnd()
{
    node *ptr=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(ptr);
}

void delNth(int item)
{
    node *ptr=search_item(item),*loc,*aloc;
    if(ptr==NULL)
        cout<<endl<<"Item not in the list ";
    else if(ptr->prev==NULL)
    {
        head=head->next;
        head->prev=NULL;
        free(ptr);
    }
    else if(ptr->next==NULL)
    {
        tail=tail->prev;
        tail->next=NULL;
        free(ptr);
    }
    else
    {
        loc=ptr->next;
        aloc=ptr->prev;
        loc->prev=aloc;
        aloc->next=loc;
        free(ptr);
    }
}
