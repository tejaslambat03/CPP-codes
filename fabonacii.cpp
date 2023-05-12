#include<iostream>
using namespace std;

int main()
{
    int num, i,p=0,f=1, next;
    cout<<"Enter how many Fibonacci number to print: ";
    cin>>num;
    cout<<"Fibonacci series"<<endl;
    if(num<0)
    {
    cout<<"Invalid Input"<<endl;
    }
    else
    {
       for(i=1;i<=num;++i)
       {
        if(i == 1) 
        {
            cout << p << ", ";
            continue;
        }
        if(i == 2) {
            cout << f << ", ";
           
            continue;
        }
        next = p + f;
        p = f;
        f = next;
        
        cout << next << ", ";
    }
        }
    return 0;
}