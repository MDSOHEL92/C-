#include<iostream>
using namespace std;

void add(int a,int b);
void add(int a,int b,int c);
 
int main()
{
    add(3,4);
    add(7,5,8);
    add(20,19.5);
    return 0;
}

void add(int a, int b)
{
    cout<<"addition 1:"<<a+b<<endl;
    
}

void add( int a,int b,int c)
{
    cout<<"addition 2:"<<a+b+c<<endl;
}
