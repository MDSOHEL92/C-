#include<iostream>
using namespace std;

int main()
{
	int cp;
	cout<<"enter cost price :";
	cin>>cp;
	int sp;
	cout<<"enter the selling price :";
	cin>>sp;
	if(sp>cp)
	{
		cout<<"profit";
	}
	if(sp<cp)
	{
		cout<<"loss";
	}
	if(sp==cp)
	{
		cout<<"no profit no loss";
	}
}
