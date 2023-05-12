#include <iostream>
using namespace std;
float area(float a, float b)
{

float ar= a*b;
return ar;
}
int main()
{
    float a,b,ar;
    cout<<"Enter dimensions of 2-D rectangle:"<<endl;
    cout<<"Enter height:";
    cin>>a;
    cout<<"Enter breadth:";
    cin>>b;
    ar=area(a,b);
    cout<<"Area is: "<<ar<<"cm sq."<<endl;

    
}