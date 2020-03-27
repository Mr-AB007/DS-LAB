#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct qeue
{
    int info,pr;
    struct qeue *next;
}node;

node *head;

void empty_queue()
{
    head = NULL;
}

node* search_node(int p)
{
    node *loc = head,*ptr = head->next;
    if(loc->pr > p)
        return(loc);
    while(ptr != NULL)
    {
        if(ptr->pr>p)
            return(loc);
        ptr = ptr->next;
        loc = loc->next;
    }
    return(loc);

}

void insert_node(int item,int p)
{
    node *loc,*aloc = head, *ptr = (node*)malloc(sizeof(node));
    ptr->info = item;
    ptr->pr = p;
    if(head == NULL)
    {
        head = ptr;
        ptr->next = NULL;
    }
    else
    {
        loc = search_node(p);

        if(loc == head)
        {
            if(head->pr<p || head->pr==p)
            {
                ptr->next=loc->next;
                loc->next=ptr;
            }
            else
            {
                ptr->next=head;
                head=ptr;
            }
        }
        else if(loc->next == NULL)
        {
            loc->next = ptr;
            ptr->next = NULL;
        }
        else
        {
            ptr->next=loc->next;
            loc->next=ptr;
        }
    }
}

void disp()
{
    node *ptr = head;
    while(ptr!=NULL)
    {
        cout<<endl<<"Element : "<<ptr->info<<" Priority : "<<ptr->pr;
        ptr = ptr->next;
    }
}

int main()
{
    int a,n,p;
    cout<<"Enter the numbers of elemnents: ";
    cin>>n;
    empty_queue();
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Element : ";
        cin>>a;
        cout<<endl<<"Priority : ";
        cin>>p;
        while(p <= 0)
            {
                cout<<endl<<"Priority should be greater than 0 "<<endl<<"Priority : ";
                cin>>p;
            }
        insert_node(a,p);
    }

    disp();
    return 0;
}
