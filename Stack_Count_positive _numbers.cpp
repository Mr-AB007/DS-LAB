#include <iostream>

using namespace std;
#define MAX 10


class Stack {
    int top;
 
public:
    int a[MAX];
 
    Stack() { top = -1; }
    
bool push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}
    
int pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

int peek()
    {
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
    
    bool isEmpty()
    {
        return (top < 0);
    }
};
 

 

int main()
{
    class Stack s;
    s.push(-10);
    s.push(20);
    s.push(30);
    s.push(-60);
    s.push(-60);
    
   int pos=0,neg=0;
   
    while(!s.isEmpty())
    {
        
        if(s.peek()>=0)
            pos++;
        else
            neg++;
        
        s.pop();
    }
    cout<<"Positive= "<<pos<<" Negative= "<<neg;
 
    return 0;
}
