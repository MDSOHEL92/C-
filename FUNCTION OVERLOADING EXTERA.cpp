#include<iostream>
using namespace std;

void add(int a, int b);
void add(int a, int b, int c);
void add(int ,float);

int main()
{
	add(2,3);
	add(2,3,4);
    add(10,20);
	
	return 0;
}
void add(int a, int b)
{
	cout<<"Addition 1 ="<<a+b;
}
void add(int a, int b, int c)
{
	cout<<"Addition 2 ="<<a+b+c;
}
void add(int ,float)
{
	cout<<"Addition 3 =";
}
