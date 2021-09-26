/******************************************************************************

  Queue implementation using array and Finding Armstrong numbers  

*******************************************************************************/

#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;

void Insert(int n) {
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      rear++;
      queue[rear] = n;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
//For checking Armstrong numbers
bool isArmstrong(int n){
int r,sum=0,temp;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
    return true;    
else    
return false;  
} 

//For Displaying Armstrong numbers
void DisplayAArmstrong() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Armstrong numbera in Queue are : ";
      for (int i = front; i <= rear; i++)
            if(isArmstrong(queue[i]))
                cout<<queue[i]<<" ";
        
   }
}

int main() {
   Insert(100);
   Insert(371);
   Insert(120);
   Insert(153);
   Insert(100);
   Display();
   Delete();
   Display();
   DisplayAArmstrong();
   
   return 0;
}
