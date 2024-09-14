#include<iostream>
using namespace std;

class Demo
{
    public:
        const int X;
        const int Y;
        int Z;

        Demo(int i, int j) :X(i), Y(j)
        {
            cout<<"Inside constructor\n";
        }
};

int main()
{
    Demo obj1(11,21);

    cout<<obj1.X<<"\n";
    cout<<obj1.Y<<"\n";
    cout<<obj1.Z<<"\n";

    //obj1.X++;
    //obj1.Y++;
    obj1.Z++;

    return 0;
}