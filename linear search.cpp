#include<iostream>
using namespace std;

int main()
{
    int arr[5],num;
    cout << "Enter 5 elements in array: "<<endl;  
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to search:";
    cin>>num;
    for(int i=0;i<5;i++)
    {
        for (arr[i]==num)
        {
            cout<<"Element found at "<<i<<endl;
            
        }
        
    }

    
    return 0;
}