#include<stdio.h>
#pragma pack(1)
struct Student
{
    int RollNO;
    char Division; 
    int Age;
    float Marks;
    int Salary;
};

int main()
{
    struct Student Amit;
    struct Student Pooja;
    
    printf("Size of object is: %d\n",sizeof(Amit));
    
    
    return 0;
}