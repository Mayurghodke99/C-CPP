/*#include<stdio.h>
int main()
{
    int arr[3]={21,43,54};
    int x=0;

    x=arr[2]+21+arr[0];
    x++;

    printf("%d",x);

    return 0;
}


#include<stdio.h>
int main()
{
    float arr[4]={98.3,4.3,51.6,7.6};
    int i=0;

    printf("%f\n",arr[i]);
    i++;

    printf("%f\n",arr[i]);
    i++;

    printf("%f\n",arr[i]);

    return 0;
}

#include <stdio.h>
int main()
{
int arr[6] = {10,20,30}; // Consider base address of arr as 100
int no = 2;
printf("%d\n",arr[0]);
printf("%d\n",arr[no]);
printf("%d\n",arr[3-1]);
printf("%d\n",arr);
printf("%d\n",arr+1);
printf("%d\n",(&arr)+1);
printf("%d\n",arr+3);
printf("%d\n",&(arr[3]));
printf("%d\n",arr[4]);
printf("%d\n",&(arr[5]));
printf("%d\n",2[arr]);
return 0;
}

#include<stdio.h>
int main()
{
double no = 3.14; // Consider address of no as 100
double *a = &no; // Consider address of a as 200
double **b = &a; // Consider address of b as 300
double ***c = &b; // Consider address of c as 400
double ****d = &c; // Consider address of d as 500
printf("%d\n",&no);
printf("%d\n",a);
printf("%d\n",&c);
printf("%d\n",&d);
printf("%d\n",d);
printf("%d\n",**d);
printf("%d\n",**c);
printf("%d\n",*b);
return 0;
}




#include<stdio.h>
int main()
{
int arr[] = {10,20,30,40,50}; // Consider base address of arr as 100
int *p = arr; // Consider address of p as 200

printf("%d\n",arr);
printf("%d\n",&arr);
printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",sizeof(arr));
printf("%d\n",sizeof(arr[0]));
printf("%d\n",sizeof(p));
printf("%d\n",sizeof(*p));
return 0;
}

include<stdio>

void Fun();
void Gun();

int main()
{
    printf("Inside main");
    Fun();
    printf("End of main");
 
    return 0;
}

void Gun()
{
    printf("Insdie Gun");
}
void Fun()
{
    printf("Inside Fun";)
    Gun();
    printf("End of fun");
}


#include<stdio.h>

extern int i;
extern int j;
extern int arr[4];

void gun();

int main()
{
    printf("value of i is % d",i);
    printf("value of j is % d",j);

    j=51;
    printf("value of j is % d",j);
    printf("value from array % d",arr[0]);

    fun();
    gun();

    return 0;
}

int i=21;

void gun()
{
    printf("Inside gun");
}

#include<stdio.h>
int j=21;
int arr[4]={10,20,30,40};

void fun()
{
    print("Inside fun");
}

#include<stdio.h>


int CheckEven(int);
int main()
{
    int value=0;
    auto int ret =0;

    printf("please enter number");
    scanf("%d",&value);

    ret =CheckEven(value);
    if(ret==1)
    {
        printf("It is Even number");
    }
    else{
        printf("It is odd number")
    }
    return 0;
}

int CheckEevn(int no)
{
    register int output =0;
    if((no%2)==)
    {
        output=1;
    }
    else{
        output=0;
    }
    return output;

}


#include<stdio.h>
int main()
{
    int no=10;
    int *p=NULL;
    p=&no;

    printf("%d\n",no);
    printf("%d\n",*p);

    *p=11;

    printf("%d\n",no);
     printf("%d\n",*p);

     return 0;

}

#include<stdio.h>
int main()
{
    float arr[]={10.3,43.4,45.34,234.45};
    float*p=NULL;
    float*q=NULL;

    p=arr;
    q=&(arr[3]);

    printf("%d\n",p);
    printf("%d\n",q); 
    printf("%f\n",*q);
    printf("%f\n",*p);
    printf("%f\n",(p+2));
    printf("%f\n",(p+1));
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%f\n",0[arr]);
    printf("%f\n",(q-p));
    printf("%f\n",*(q-2));

    return 0;
}


struct demo
{
    int i;
    float f;
    double i;
};
*/


#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"Base constructor\n";
        }
        int Addition(int i, int j) //1000
        {
            return i+j;
        }
        virtual int Substraction(int i, int j) //2000
        {
            return i-j;
        }
        virtual int Multiplication(int i, int j) = 0;
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"Derived constructor\n";
        }
        int Substraction(int i, int j) //3000
        {
            return i-j;
        }
        int Mulitiplication(int i, int j) //4000
        {
            return i*j;
        }
        virtual int Division(int i, int j) //5000
        {
            return i/j;
        }
};

int main()
{
    //Base bobj;
    Derived dobj;
    Base *bp = &dobj;

     cout<<bp->Addition(10,11)<<"\n";
     cout<<bp->Substraction(10,11)<<"\n";
     cout<<bp->Multiplication(10,11)<<"\n";
     // cout<<bp->Division(100,10)<<"\n";
    return 0;
}