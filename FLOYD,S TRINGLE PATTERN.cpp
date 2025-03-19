#include<iostream>
using namespace std;  
// FLOYD,S TRINGLE PATTERN
int main()
{
    int n=4;
    int num=1;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}

