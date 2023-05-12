#include<iostream>
using namespace std;
class Person
{
   private: 
int age; string name;
public:
void readp()
{
    cout<<"Enter age and name: "<<endl;
    cin>>age>>name;
}
void showp()
{
    cout<<"The age is "<<age<<"Name is "<<name<<endl;
}
};
class Dept
{
private: 
int dno; string dname;
public:
void readd()
{
    cout<<"Enter Department no and name: "<<endl;
    cin>>dno>>dname;
}
void showd()
{
    cout<<"The Department no. is "<<dno<<". Name of department is "<<dname<<endl;
}
};
class Student: public Person , public Dept
{
private: 
int rno, sem; float per;
public:
void reads()
{
    cout<<"Enter roll no, sem  and percentage: "<<endl;
    cin>>rno>>sem>>per;
}
void shows()
{
    cout<<"The roll no is "<<rno<<". Sem is "<<sem<<". Percentage is "<<per<<endl;
}
};
int main()
{
int age, rno,sem,dno;
string dname,name;
float per;
    Student s;
    s.readp();
    s.showp();
    s.readd();
    s.showd();
    s.reads();
    s.shows();
return 0;
}