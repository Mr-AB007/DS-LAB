#include <iostream>

using namespace std;

int main()
{
    int a[50],n,item;

    cout<<"Enter the number of elements :";        //reading n
    cin>>n;

    cout<<endl<<"Enter the Elements of array: ";      //reading elements of array
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<endl<<"Enter the element to remove its all occurrence :";     
    cin>>item;

    for(int i=0;i<=n;i++) 					//removing all occurrence of item
    {
        if(a[i]==item)
        {
            for(int j=i;j<=n;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }

    if(n<1)							//checking size of array is less than 5
    {
        cout<<endl<<"Array is Empty"<<endl<<endl<<"END";			
        return 0;
    }

    cout<<endl<<"After the removal of all occurrence of "<<item<<endl;
    cout<<endl<<"Array is : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    if(n<5)
        cout<<endl<<endl<<"** Array size is less than 5 **"<<endl;
    else									//inserting item to 5th position
    {
        cout<<endl<<endl<<"Enter the number to add at 5th position: ";
        cin>>item;
        for(int i=n;i>=4;i--)
        {
            a[i+1]=a[i];
        }
        a[4]=item;
        n++;
    }

    cout<<endl<<"Final Array is : ";			//printing array
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<endl<<endl<<"END";

    return 0;
}
