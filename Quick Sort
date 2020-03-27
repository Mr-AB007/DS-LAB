#include <iostream>

using namespace std;

int L[2],U[2],TOP1,TOP2;        //Stacks declaration

void pushL(int item)
{
    TOP1++;
    L[TOP1]=item;
}

void pushU(int item)
{
    TOP2++;
    U[TOP2]=item;
}

int popL()
{
    int a=L[TOP1--];
    return(a);
}

int popU()
{
    int a=U[TOP2--];
    return(a);
}

void quickSort(int[],int);                      //declaration of quickSort Function
int quick(int[],int,int);

int main()
{
    int n;
    cout<<"Enter the  umber of elements : ";
    cin>>n;

    int a[n];

    cout<<endl<<"Enter the all "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quickSort(a,n);                     //Quick sort function call

    cout<<endl<<"Sorted elements are : ";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


void quickSort(int a[],int n)           //definition of QuickSort function
{
    if(n>1)
    {
        pushL(0);               //pushing the LOWWER index to Lower stack(L)
        pushU(n-1);             //pushing the  Upper index to Upper stack(U)
    }
    int beg,last,loc;
    while(TOP1!=0)
    {
        beg=popL();
        last=popU();

        loc=quick(a,beg,last);

        if(beg < loc-1 )                //pushing lower and upper index of unsorted sublist to the stacks
        {
            pushL(beg);
            pushU(loc-1);
        }
        if(loc+1 < last)
        {
            pushL(loc+1);
            pushU(last);
        }
    }
}

int quick(int a[],int beg,int last)         // Sub part of quickSort function FOR SORTING ON THE ELEMNETS OF ARRAY
{
    int loc,left,right;
    loc=left=beg; right=last;

    while(1)
    {
        while(a[loc] <= a[right] && loc != right)
            right--;

        if(loc==right)
            return loc;
        if(a[loc] > a[right])
        {
            int temp=a[loc];        //SWAPPING a[LOC] and a[right]
            a[loc]=a[right];
            a[right]=temp;
            loc=right;
        }
        while(a[left] <= a[loc] && left != loc)
            left++;
        if(loc == left)
            return loc;
        if(a[left] > a[loc])
        {
            int temp=a[loc];        //SWAPPING a[LOC] and a[left]
            a[loc]=a[right];
            a[right]=temp;
            loc=left;
        }
    }
}
