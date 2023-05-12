#include<iostream>
using namespace std;

int main()
{
    int num, wait;
    cout<<"Enter your age:"<<endl;
    cin>>num;
    if(num>=18)
    {
    cout<<"You are eligible to vote!"<<endl;
    }
    else
    {
    cout<<"You are not eligible for voting"<<endl;
    wait= 18- num;
    cout<< " You have to wait"<<wait<<"years!";
    }
    return 0;
}