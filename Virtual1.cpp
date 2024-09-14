#include<iostream>
using namespace std;

class Base
{
    public:
       int A,B;
       void Fun() //1000
       {
        cout<<"Base Fun\n";
       }
       void Gun() //2000
       {
        cout<<"Base Gun\n";
       }
       void Sun()  //3000
       {
        cout<<"Base Sun\n";         
       }
};

class Derived : public Base
{
    public:
       int X,Y;
       
       void Gun() //4000
       {
        cout<<"Derived Gun\n";
       }
       void Sun() //5000
       {
        cout<<"Derived Sun\n";
       }
       void Run() //6000
       {
        cout<<"Derived Run\n";
       }
       
};
int main()
{
    Base bobj;
    Derived dobj;

    bobj.Fun();  // Base Fun
    bobj.Gun();  // Base Gun
    bobj.Sun();  // Base Sun

    dobj.Fun();  // Base Fun
    dobj.Gun();  //
    dobj.Sun();
    dobj.Run();
    
    return 0;
}