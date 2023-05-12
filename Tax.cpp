#include<iostream>
using namespace std;

int main()
{
    int salary;
    float tax;
    cout<<"Enter salary:"<<endl;
    cin>>salary;
    
    
    if(salary>=1 && salary<= 150000)
    {
        tax=0;
        cout<<"Tax is "<<tax<<"Rs.";
    }
    else if (salary>=150001 && salary<=300000)
    {
        tax=salary*(0.1);
        cout<<"Tax is "<<tax<<" Rs.";
    }
    else if (salary>=300001 && salary<=500000)
    {
        tax= salary*(0.2);
        cout<<"Tax is "<<tax<<" Rs.";
    }
    else if (salary>500000)
    {
        tax=salary*(0.3);
        cout<<"Tax is "<<tax<<" Rs.";
    }
    
}