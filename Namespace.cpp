#include<iostream>
 //Inbuilt namespce

namespace Marvellous
{
    class Demo
    {
        //logic
    };
}

namespace PPA
{
    class Hello
    {
        //Logic
    };
}
using namespace Marvellous;

int main()
{
    std::cout<<"Inside main\n";
    Demo dobj;
    PPA::Hello hobj;

    return 0;
}