#include<iostream>
using namespace std;
// MAKE A FUNCTION WHICH CALCULATES THE FACTORIAL OF N USING RECURSION
int fact(int n)
{
	if(n==0 || n==1)return 1;
	return n* fact (n-1);
}
int main()
{
	int n;
	cout<<"Enter n :";
	cin>>n;
	cout<<fact(n);
}
