#include<iostream>
using namespace std;

// Take 3 positive integers input and print the greatest of them.

int main()
{
	int a,b,c;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	cout<<"Enter 3rd number:";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is greatest number :";
	}
	else
		if(b>a && b>c)
	{
	cout<<b<<" is greatest numbber :";
    }
    else{
    	cout<<c<<" is greatest number :";
	}
}
