/******************************************************************************

                             Minimum Retrival Time problem

*******************************************************************************/

#include <bits/stdc++.h>
 
using namespace std;

double findOrderMRT(int arr[], int n)
{
    sort(arr, arr+n);
    double MRT = 0;int i=0,j=0;
    while(i<n){
        int j=0,sum=0;
        while(j<=i){
            sum+=arr[j];
            j++;
        }
        MRT+=sum;i++;
    }
    return (MRT/n);
}
 
int main()
{
    int arr[] = { 10,2, 5, 3 };
    cout<<"MRT "<<findOrderMRT(arr, 4);
    return 0;
}
