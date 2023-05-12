#include <iostream>
using namespace std;

int main() 
    {
    int num, rem,small=9;
        cout<<"enter number: ";
        cin>>num;
        while(num>0)
        {
           rem=num%10;
           if (rem<small)
        {
        small=rem;
        } 
        num=num/10;
        }
        cout<<small;
        return 0;
    }