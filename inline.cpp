#include<iostream>
using namespace std;

inline int squared(int a)
{
    return a*a;
}

inline int cube (int a)
{
    return a*a*a;
}

int main()
{
    cout<<"squared a="<<squared(5)<<endl;
    cout<<"cube of a="<<cube(5)<<endl;
    cout<<" "<<endl;
}
