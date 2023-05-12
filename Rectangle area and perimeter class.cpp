#include<iostream>
using namespace std;

class Rectangle
{
   private: float length, breadth;
public:
void read(float length,float breadth)
{
    this->length= length;
    this->breadth= breadth;
}
float area()
{
   float a=length*breadth;
   return a;
}
float perimeter()
{
    float p=length+breadth+length+breadth;
    return p;
}
};
int main()
{
    float length, breadth,a,p;
    cout<<"Enter length of Rectangle : "<<endl;
    cin>>length;
    cout<<"Enter breadth of Rectangle : "<<endl;
    cin>>breadth;
    
    Rectangle r;
    r.read(length, breadth);
    a=r.area();
    p=r.perimeter();
    cout<<"Area of Rectangle is "<<a<<" sq.m"<<endl;
    cout<<"Perimeter of Rectangle is "<<p<<" cm."<<endl;
   
return 0;
}