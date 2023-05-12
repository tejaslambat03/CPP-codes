#include<iostream>
using namespace std;

int main()
{
    int a, b , c, d, e, f, g, amount;
    cout << "Enter amount:";
    cin>>amount;
    a= (amount)/2000;
    b= (amount-(a*2000))/500;
    c= (amount-(a*2000)-(b*500))/200;
    d= (amount-(a*2000)-(b*500)-(c*200))/100;
    e= (amount-(a*2000)-(b*500)-(c*200)-(d*100))/50;
    f= (amount-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50))/20;
    g= (amount-(a*2000)-(b*500)-(c*200)-(d*100)-(e*50)-(f*20))/10;
    cout << "2000 x"<<a<<endl;
    cout << "500 x"<<b<<endl;
    cout << "200 x"<<c<<endl;
    cout << "100 x"<<d<<endl;
    cout << "50 x"<<e<<endl;
    cout << "20 x"<<f<<endl;
    cout << "10 x"<<g<<endl;
    
    return 0;
}