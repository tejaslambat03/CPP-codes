#include<iostream>
using namespace std;

int main()
{
    int unit,bill;
    cout<<"Enter units consumed:"<<endl;
    cin>>unit;
    
    
    if(unit>=1 && unit<= 100)
    {
        bill= unit * 3;
        cout<<"Bill is "<<bill;
    }
    else if ( unit>=101 && unit<=300)
    {
        bill=+((unit -100)*5);
        cout<<"Bill is "<<bill;
    }
    else if (unit>=301)
    {
        bill= 300+ 1000 +((unit-300)*7);
        cout<<"Bill is "<<bill;
    }
    
}