#include <iostream>
using namespace std;

int main() 
    {
    int i ,j;
    for ( i=5;i>=1;i--)
    {
    for( j=1;j<=10;j++)
    {
    if (j<=i||j>=11-i)
        {
        cout<<"* ";
        }
        else
        {
        cout <<"  ";}
        }
    }
    
        return 0;
    }