#include<iostream>
using namespace std;

int main()
{
    char gender; 
    int age;
    cout<<"Enter your Gender (M or F):";
    cin>>gender;
    cout<<"Enter your age:";
    cin>>age;
    if ( gender=='M' && age>=21)
    {
    cout<<"You are eligible for marriage";
    }
    else if (gender=='F' && age>=18)
    {
    cout<<"You are eligible for marriage";
    }
    else
    {
        cout<<"You are not eligible for marriage";
    }

}
