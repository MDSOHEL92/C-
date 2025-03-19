#include<iostream>
using namespace std;
// Take input percentage of a student and print a grade accoriding to mark'
//81-100 very good, 61-80 good, 41-60 average,<=40 fail

int main()
{
	int n;
	cout<<"enter the marks :";
	cin>>n;
	if(n>=81 && n<=100)
	{
		cout<<"Very Good";
	}
	if(n>=61 && n<=80)
	{
		cout<<"Good";
	}
	if(n>=41 && n<=60)
	{
		cout<<"Average";
	}
	if(n<=40)
	{
		cout<<"Fail";
	}
}
