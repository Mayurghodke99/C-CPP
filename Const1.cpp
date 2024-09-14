#include<iostream>
using namespace std;

const int A=10;  // const global variable
int B=20;

class Demo
{
    public:
       int X,Y;
       Demo()
       {
        X=10;
        Y=20;
       }
       void fun(int i, const int j)   //constant input argument
       {
        int No1=11;
        const int No2=21;  //constant local variable
        i++;   //A
        j++;
        No1++;
        No2++;
       }
};

int main()
{
    Demo obj1;
    const Demo obj2;  //constant object

    obj1.fun(51,101);

    obj1.X++;
    obj1.Y++;
    obj2.X++;
    obj2.Y++;
    A++;
    B++;

    return 0;
}