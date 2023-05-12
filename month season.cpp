#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter number of month:"<<endl;
    cin>>m;
    
    
    if (m>=3 && m<= 5)
    {
    cout<< " It is summer season"<<endl;
    }
    else if ( m>=6 && m<=8)
    {
    cout<< " It is rainy season"<<endl;
    }
    else if ( m>=9 && m<=11)
    {
    cout<< " It is autum season"<<endl;
    }
    else if ( m==12 || m==1 || m==2)
    {
    cout<< " It is winter season"<<endl;
    }
    else 
    {
    cout<<"Invalid month";
    }
    return 0;
}