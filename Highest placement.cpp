#include<iostream>
using namespace std;

int main()
{
        int cse,ece,mech;
    cout<<"Enter number of placements:"<<endl;
    cout<<"Enter number of placements in CSE Branch:";
    cin>>cse;
    cout<<"Enter number of placements in ECE Branch:";
    cin>>ece;
    cout<<"Enter number of placements in Mech Branch:";
    cin>>mech;
    {if (cse<0 || (ece<0 || mech<0))
    {
        cout<<"Invalid input";
    }
    else if(cse>mech && cse>ece)
    {
        cout<<"Highest Placement"<<endl;
        cout<<"CSE";
    }
    else if (mech>cse && mech>ece)
    {
        cout<<"Highest Placement"<<endl;
        cout<<"Mech";
    }
    else if (ece>mech && ece>cse)
    {
        cout<<"Highest Placement"<<endl;
        cout<<"ECE";
    }
    else if (cse==0 || mech==0 || ece==0)
    {
        cout<<"None of the dept got highest placement";
    }
}
{
    if (cse==mech && cse==ece)
    {
        cout<<"All branches got same placements";
    }
    else if( cse==mech)
    {
        cout<<"CSE and Mech got same placement";
    }
    else if( ece==mech)
    {
        cout<<"ECE and Mech got same placement";
    }
    else if( cse==ece)
    {
        cout<<"CSE and ECE got same placement";
    }
}

}
