#include<iostream>
using namespace std;

int main()
{
    int cost,sell,profit ,loss;
    cout<<"Enter cost price: "<<endl;
    cin>>cost;
    cout<<"Enter selling price: "<<endl;
    cin>>sell;
    if(sell>cost)
    {
    profit=sell-cost;
    cout<<"Profit of "<<profit<<"Rs."<<endl;
    }
    else
    {
    loss=cost-sell;
    cout<<"Loss of "<<loss<<"Rs."<<endl;
    }
    return 0;
}